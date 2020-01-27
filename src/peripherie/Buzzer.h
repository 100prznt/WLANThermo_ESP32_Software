/*************************************************** 
    Copyright (C) 2019  Martin Koerner

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
#pragma once

#include "Arduino.h"

#define BUZZER_INTERVALL_MS 1000u
#define BUZZER_FREQUENCY 2000

class Buzzer
{
  public:
    Buzzer(uint8_t ioPin, uint8_t channel);
    virtual void enable();
    virtual void disable();
    virtual void update();
  private:
    boolean enabled;
    uint8_t ioPin;
    uint8_t channel;
    double frequency;
    const uint intervall = BUZZER_INTERVALL_MS;
    uint previousMillis;
};
