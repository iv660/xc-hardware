#include <Arduino.h>

#include "AnalogJoystick.h"

XC::Hardware::AnalogJoystick::AnalogJoystick(int pinX, int pinY)
{
    this->pinX = pinX;
    this->pinY = pinY;

    pinMode(pinX, INPUT);
    pinMode(pinY, INPUT);
}

long XC::Hardware::AnalogJoystick::getX()
{
    return analogRead(pinX);
}

long XC::Hardware::AnalogJoystick::getY()
{
    return analogRead(pinY);
}
