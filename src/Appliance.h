#if !defined(APPLIANCE_H)
#define APPLIANCE_H

#include "ScreenInterface.h"
#include "DirectionSwitchInterface.h"
#include "ToggleButtonInterface.h"
#include "PositioningDeviceInterface.h"

namespace XC 
{
    namespace Hardware
    {
        struct Appliance
        {
            public:
                ScreenInterface* screen;
                DirectionSwitchInterface* directionSwitch;
                ToggleButtonInterface* pauseButton;
                PositioningDeviceInterface* analogJoystick;
        };
    }; // namespace Hardware
}; // namespace XC


#endif // APPLIANCE_H
