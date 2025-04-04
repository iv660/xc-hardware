#pragma once 

#include "PositioningDeviceInterface.h"

namespace XC::Hardware
{
    class AnalogJoystick: public PositioningDeviceInterface
    {
        private:
        public:
            AnalogJoystick(int pinX, int pinY);
    };
}
