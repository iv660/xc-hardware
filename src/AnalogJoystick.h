#pragma once 

#include "PositioningDeviceInterface.h"

namespace XC::Hardware
{
    class AnalogJoystick: public PositioningDeviceInterface
    {
        private:
            int pinX;
            int pinY;
        public:
            AnalogJoystick(int pinX, int pinY);
            long getX() override;
            long getY() override;
    };
}
