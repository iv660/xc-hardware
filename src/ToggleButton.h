#pragma once
#include <Arduino.h>
#include "ToggleButtonInterface.h"

namespace XC::Hardware
{
    class ToggleButton: public ToggleButtonInterface
    {
        private:
            int pin;
            bool on = false;
            int lastState = HIGH;

            inline void toggleState();

        public:
            ToggleButton(int pin);

            void tick();
            bool isOn();
            void reset();
    };
}
    