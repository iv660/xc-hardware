#pragma once

namespace XC::Hardware
{
    class PositioningDeviceInterface
    {
        public:
            virtual long getX() = 0;
            virtual long getY() = 0;
    };
}

