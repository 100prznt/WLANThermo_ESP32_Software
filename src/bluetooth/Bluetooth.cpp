/*************************************************** 
    Copyright (C) 2020  Martin Koerner

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    
    HISTORY: Please refer Github History
    
****************************************************/

#include "Bluetooth.h"
#include "bleFirmwareDat.h"
#include "bleFirmwareBin.h"
#include "temperature/TemperatureBase.h"
#include <byteswap.h>

#define BLE_BAUD 115200u

#define BLE_JSON_DEVICES "d"
#define BLE_JSON_NAME "n"
#define BLE_JSON_ADDRESS "a"
#define BLE_JSON_STATUS "s"
#define BLE_JSON_COUNT "c"
#define BLE_JSON_TEMPERATURES "t"

HardwareSerial *Bluetooth::serialBle = NULL;
String Bluetooth::bleDeviceJson = "";

Bluetooth::Bluetooth(int8_t rxPin, int8_t txPin, uint8_t resetPin)
{
    serialBle = new HardwareSerial(1);
    serialBle->begin(BLE_BAUD, SERIAL_8N1, rxPin, txPin);
    this->resetPin = resetPin;
    pinMode(this->resetPin, OUTPUT);
}

void Bluetooth::init()
{
    if (this->doDfu())
    {
        xTaskCreatePinnedToCore(Bluetooth::task, "Bluetooth::task", 10000, this, 1, NULL, 1);
    }
}

void Bluetooth::getDevices()
{
    serialBle->setTimeout(100);
    serialBle->println("getDevices");
    bleDeviceJson = serialBle->readStringUntil('\n');
    Serial.println(bleDeviceJson);
}

String Bluetooth::getDevicePeerAddress(uint8_t index)
{
    DynamicJsonBuffer jsonBuffer;
    String peerAddress = "";

    JsonObject &json = jsonBuffer.parseObject(bleDeviceJson);

    if (!json.success())
    {
        //Serial.println("Invalid JSON");
        return peerAddress;
    }

    if (json.containsKey(BLE_JSON_DEVICES) == false)
    {
        Serial.println("Invalid JSON: devices missing");
        return peerAddress;
    }

    JsonArray &_devices = json[BLE_JSON_DEVICES].asArray();
    uint8_t deviceIndex = 0u;

    for (JsonArray::iterator itDevice = _devices.begin(); itDevice != _devices.end(); ++itDevice)
    {

        JsonObject &_device = itDevice->asObject();

        if (_device.containsKey(BLE_JSON_ADDRESS) == false)
        {
            Serial.println("Invalid JSON: address missing");
            deviceIndex++;
            continue;
        }

        if (deviceIndex == index)
        {
            peerAddress = _device[BLE_JSON_ADDRESS].asString();
            break;
        }

        deviceIndex++;
    }

    return peerAddress;
}

uint8_t Bluetooth::getDeviceTemperatureCount(String peerAddress)
{
    DynamicJsonBuffer jsonBuffer;
    uint8_t temperatureCount = 0u;

    JsonObject &json = jsonBuffer.parseObject(bleDeviceJson);

    if (!json.success())
    {
        //Serial.println("Invalid JSON");
        return temperatureCount;
    }

    if (json.containsKey(BLE_JSON_DEVICES) == false)
    {
        Serial.println("Invalid JSON: devices missing");
        return temperatureCount;
    }

    JsonArray &_devices = json[BLE_JSON_DEVICES].asArray();

    for (JsonArray::iterator itDevice = _devices.begin(); itDevice != _devices.end(); ++itDevice)
    {

        JsonObject &_device = itDevice->asObject();

        if (_device.containsKey(BLE_JSON_ADDRESS) == false)
        {
            Serial.println("Invalid JSON: address missing");
            continue;
        }

        if (peerAddress.equalsIgnoreCase(_device[BLE_JSON_ADDRESS]))
        {
            if (_device.containsKey(BLE_JSON_TEMPERATURES) == false)
            {
                Serial.println("Invalid JSON: temperatures missing");
                break;
            }

            JsonArray &_temperatures = _device[BLE_JSON_TEMPERATURES].asArray();

            temperatureCount = _temperatures.size();
            break;
        }
    }

    return temperatureCount;
}

boolean Bluetooth::isDeviceConnected(String peerAddress)
{
    DynamicJsonBuffer jsonBuffer;
    boolean isConnected = false;

    JsonObject &json = jsonBuffer.parseObject(bleDeviceJson);

    if (!json.success())
    {
        //Serial.println("Invalid JSON");
        return isConnected;
    }

    if (json.containsKey(BLE_JSON_DEVICES) == false)
    {
        Serial.println("Invalid JSON: devices missing");
        return isConnected;
    }

    JsonArray &_devices = json[BLE_JSON_DEVICES].asArray();

    for (JsonArray::iterator itDevice = _devices.begin(); itDevice != _devices.end(); ++itDevice)
    {

        JsonObject &_device = itDevice->asObject();

        if (_device.containsKey(BLE_JSON_ADDRESS) == false)
        {
            Serial.println("Invalid JSON: address missing");
            continue;
        }

        if (_device.containsKey(BLE_JSON_STATUS) == false)
        {
            Serial.println("Invalid JSON: status missing");
            continue;
        }

        if (peerAddress.equalsIgnoreCase(_device[BLE_JSON_ADDRESS]))
        {
            isConnected = _device[BLE_JSON_STATUS].as<boolean>();
        }
    }

    return isConnected;
}

float Bluetooth::getTemperatureValue(String peerAddress, uint8_t index)
{
    DynamicJsonBuffer jsonBuffer;

    JsonObject &json = jsonBuffer.parseObject(bleDeviceJson);

    if (!json.success())
    {
        //Serial.println("Invalid JSON");
        return INACTIVEVALUE;
    }

    if (json.containsKey(BLE_JSON_DEVICES) == false)
    {
        Serial.println("Invalid JSON: devices missing");
        return INACTIVEVALUE;
    }

    JsonArray &_devices = json[BLE_JSON_DEVICES].asArray();

    for (JsonArray::iterator itDevice = _devices.begin(); itDevice != _devices.end(); ++itDevice)
    {

        JsonObject &_device = itDevice->asObject();

        if (_device.containsKey(BLE_JSON_ADDRESS) == false)
        {
            Serial.println("Invalid JSON: address missing");
            continue;
        }

        if (peerAddress.equalsIgnoreCase(_device[BLE_JSON_ADDRESS]))
        {
            if (_device.containsKey(BLE_JSON_TEMPERATURES) == false)
            {
                Serial.println("Invalid JSON: temperatures missing");
                continue;
            }

            JsonArray &_temperatures = _device[BLE_JSON_TEMPERATURES].asArray();

            if (index < _temperatures.size())
            {
                return _temperatures[index].as<float>();
            }
        }
    }

    return INACTIVEVALUE;
}

void Bluetooth::task(void *parameter)
{
    TickType_t xLastWakeTime = xTaskGetTickCount();
    Bluetooth *bluetooth = (Bluetooth *)parameter;

    while (1)
    {
        bluetooth->getDevices();
        vTaskDelay(1000u);
    }
}

boolean Bluetooth::doDfu()
{
    boolean success = false;

    //empty rx buffer
    while (serialBle->available())
        serialBle->read();

    serialBle->setTimeout(200);
    digitalWrite(resetPin, LOW);
    delay(20);
    digitalWrite(resetPin, HIGH);

    if (serialBle->readString().startsWith("@@BOOTLOADER"))
    {
        Serial.println("Hello from BLE bootloader");

        Serial.println("Start flashing of BLE application");
        uint32_t flashStart = millis();

        TFwu sFwu;
        memset(&sFwu, 0, sizeof(TFwu));
        sFwu.commandObject = (uint8_t *)bleFirmwareDat_h;
        sFwu.commandObjectLen = sizeof(bleFirmwareDat_h);
        sFwu.dataObject = (uint8_t *)bleFirmwareBin_h;
        sFwu.dataObjectLen = sizeof(bleFirmwareBin_h);
        sFwu.dataObjectVer = bleFirmwareBin_h_version;
        sFwu.txFunction = Bluetooth::dfuTxFunction;
        sFwu.responseTimeoutMillisec = 5000u;

        fwuInit(&sFwu);
        fwuExec(&sFwu);

        while (1)
        {
            fwuCanSendData(&sFwu, 128);

            uint8_t rxBuf[4];
            uint8_t rxLen = dfuRxFunction(rxBuf, 4);
            if (rxLen > 0u)
            {
                fwuDidReceiveData(&sFwu, rxBuf, rxLen);
            }

            static uint32_t mill = millis();
            EFwuProcessStatus status = fwuYield(&sFwu, millis() - mill);
            mill = millis();

            if (FWU_STATUS_COMPLETION == status)
            {
                if (FWU_RSP_OK_NO_UPDATE == sFwu.responseStatus)
                {
                    Serial.println("\nFlashing skipped, version already up to date");
                }
                else
                {
                    Serial.printf("\nFlashing successful (%d ms)\n", (millis() - flashStart));
                }

                success = true;
                break;
            }
            else if (status == FWU_STATUS_FAILURE)
            {
                Serial.printf("\nFlashing failed = %d (%d ms)\n", sFwu.responseStatus, (millis() - flashStart));
                break;
            }
        }
    }

    return success;
}

void Bluetooth::dfuTxFunction(struct SFwu *fwu, uint8_t *buf, uint8_t len)
{
    uint8_t n = 0u;
    static uint32_t bytesSent = 0u;

    /*if (len)
        Serial.print("TX: ");*/

    while (len--)
    {
        uint8_t c = *buf++;
        n = serialBle->write(&c, 1);
        //Serial.printf("%02x ", c);
        if (++bytesSent % 1000 == 0)
        {
            Serial.printf(".");
            Serial.flush();
        }
    }

    /*if (n)
        Serial.println("");*/
}

uint8_t Bluetooth::dfuRxFunction(uint8_t *data, int maxLen)
{
    uint8_t n = 0;
    uint8_t byte;
    boolean once = true;

    do
    {
        int v = serialBle->available();
        if (v)
        {
            serialBle->readBytes(&byte, 1);
            if (once)
            {
                //Serial.print("RX: ");
                once = false;
            }

            //Serial.printf("%02x ", byte);
            maxLen--;
            n++;
            *data++ = byte;
        }
        else
        {
            /*if (n)
                Serial.println("");*/

            return n;
        }

    } while (byte != 0xc0 && maxLen > 0);

    /*if (n)
        Serial.println("");*/

    return n;
}