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
#include "DisplayTft.h"
#include "Settings.h"
#include "TaskConfig.h"
#include "Preferences.h"
#include "lv_qrcode.h"
#include "lvScreen.h"

#define TFT_TOUCH_CALIBRATION_ARRAY_SIZE 5u
#define I2C_BRIGHTNESS_CONTROL_ADDRESS 0x0D

extern const uint16_t DisplayTftStartScreenImg[25400];

TFT_eSPI DisplayTft::tft = TFT_eSPI();

DisplayTft::DisplayTft()
{
  this->disabled = false;
  this->orientation = DisplayOrientation::_0;
}

void DisplayTft::hwInit()
{
  DisplayTft::setBrightness(0u);

  tft.init();
  tft.setRotation(1);
  tft.setSwapBytes(true);
  tft.fillScreen(0x31a6);
  tft.pushImage(33, 70, 254, 100, DisplayTftStartScreenImg);

  // configure dimming IC
  this->setBrightness(100u);
}

void DisplayTft::init()
{
  xTaskCreatePinnedToCore(
      DisplayTft::task,           /* Task function. */
      "DisplayTft::task",         /* String with name of task. */
      10000,                      /* Stack size in bytes. */
      this,                       /* Parameter passed as input of the task */
      TASK_PRIORITY_DISPLAY_TASK, /* Priority of the task. */
      NULL,                       /* Task handle. */
      1);                         /* CPU Core */
}

boolean DisplayTft::initDisplay()
{

  if (this->disabled)
  {
    Serial.printf("DisplayTft::init: display disabled\n");
    return true;
  }

  lv_init();

  calibrate();

  lv_disp_buf_init(&lvDispBuffer, lvBuffer, NULL, LV_HOR_RES_MAX * 10);

  lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  disp_drv.hor_res = 320;
  disp_drv.ver_res = 240;
  disp_drv.flush_cb = DisplayTft::displayFlushing;
  disp_drv.buffer = &lvDispBuffer;
  lv_disp_drv_register(&disp_drv);

  lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = DisplayTft::touchRead;
  lv_indev_drv_register(&indev_drv);

  lvScreen_Open(lvScreenType::Home);

  return true;
}

void DisplayTft::calibrate()
{
  Preferences prefs;
  uint16_t touchCalibration[TFT_TOUCH_CALIBRATION_ARRAY_SIZE];
  size_t touchCalibrationSize;

  prefs.begin("TFT", true);
  touchCalibrationSize = prefs.getBytes("Touch", touchCalibration, sizeof(uint16_t) * TFT_TOUCH_CALIBRATION_ARRAY_SIZE);
  prefs.end();

  if (((sizeof(uint16_t) * TFT_TOUCH_CALIBRATION_ARRAY_SIZE) == touchCalibrationSize))
  {
    tft.setTouch(touchCalibration);
  }
  else
  {
    tft.fillScreen((0xFFFF));

    tft.setCursor(20, 0, 2);
    tft.setTextColor(TFT_BLACK, TFT_WHITE);
    tft.setTextSize(1);
    tft.println("calibration run");

    tft.calibrateTouch(touchCalibration, TFT_RED, TFT_BLACK, 15);

    prefs.begin("TFT", false);
    touchCalibrationSize = prefs.putBytes("Touch", touchCalibration, sizeof(uint16_t) * TFT_TOUCH_CALIBRATION_ARRAY_SIZE);
    prefs.end();
  }
}

void DisplayTft::setBrightness(uint8_t brightness)
{
  int value = (int)(brightness * 2.55);

  Wire.beginTransmission(I2C_BRIGHTNESS_CONTROL_ADDRESS);
  Wire.write(value);
  Wire.endTransmission();
}

void DisplayTft::drawCharging()
{
  DisplayTft::setBrightness(0u);

  tft.init();
  tft.setRotation(1);
  tft.setSwapBytes(true);
  tft.fillScreen(0x31a6);
  tft.setTextColor(TFT_WHITE, 0x31a6);
  tft.setTextSize(3);

  // set brightness
  DisplayTft::setBrightness(100u);

  if (gSystem->battery->isCharging())
  {
    tft.drawCentreString("CHARGING...", 160, 120, 1);
  }
  else
  {
    tft.drawCentreString("READY!", 160, 120, 1);
  }
}

void DisplayTft::task(void *parameter)
{
  DisplayTft *display = (DisplayTft *)parameter;

  TickType_t xLastWakeTime = xTaskGetTickCount();
  uint32_t bootScreenTimeout = 200u; // 1s
  while (bootScreenTimeout || display->system->isInitDone() != true)
  {
    vTaskDelay(10);
    if (bootScreenTimeout)
      bootScreenTimeout--;
  }

  while (display->initDisplay() == false)
    vTaskDelay(1000);

  for (;;)
  {
    display->update();
    // Wait for the next cycle.
    vTaskDelay(TASK_CYCLE_TIME_DISPLAY_FAST_TASK);
  }
}

void DisplayTft::update()
{
  static uint8_t updateInProgress = false;
  static boolean wakeup = false;

  if (this->disabled)
    return;

  if (gSystem->otaUpdate.isUpdateInProgress())
  {
    if (false == updateInProgress)
    {
      updateInProgress = true;
    }
    return;
  }

  lvScreen_Update();

  lv_tick_inc(TASK_CYCLE_TIME_DISPLAY_FAST_TASK);
  lv_task_handler();
}

void DisplayTft::displayFlushing(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

  tft.startWrite();
  tft.setAddrWindow(area->x1, area->y1, w, h);
  tft.pushColors(&color_p->full, w * h, true);
  tft.endWrite();

  lv_disp_flush_ready(disp);
}

bool DisplayTft::touchRead(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
  uint16_t touchX, touchY;

  bool touched = tft.getTouch(&touchX, &touchY);

  if (!touched)
  {
    return false;
  }

  if (touchX > 320 || touchY > 240)
  {
    Serial.printf("Touch coordinates issue: x: %d, y: %d\n", touchX, touchY);
  }
  else
  {

    data->state = touched ? LV_INDEV_STATE_PR : LV_INDEV_STATE_REL;

    data->point.x = touchX;
    data->point.y = touchY;
  }

  return false;
}

