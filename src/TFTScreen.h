#if !defined(TFT_SCREEN_H)
#define TFT_SCREEN_H)

#include <TFT.h>
#include "ScreenInterface.h"

using XC::Hardware::ScreenInterface;

namespace XC::Hardware
{
    class TFTScreen: public ScreenInterface, public TFT
    {
        public:
            TFTScreen(int CSPin, int DCPin, int RSTPin) : TFT(CSPin, DCPin, RSTPin) {}

            void begin() override 
            {
                initR(INITR_BLACKTAB);
                setRotation(1);
            }

            void background(int r, int g, int b) override
            {
                TFT::background(b, g, r);
            }

            void stroke(int r, int g, int b) override
            {
                TFT::stroke(b, g, r);
            }

            void textSize(int size) override
            {
                TFT::textSize(size);
            }

            void text(char *text, int x, int y) override
            {
                TFT::text(text, x, y);
            }

            void fill(int r, int g, int b) override
            {
                TFT::fill(b, g, r);
            }

            void rect(int x, int y, int w, int h) override
            {
                TFT::rect(x, y, w, h);
            }

            int width() override
            {
                return TFT::width();
            }

            int height() override
            {
                return TFT::height();
            }

            void drawPixel(int x, int y, uint16_t color) override
            {
                TFT::drawPixel(x, y, color);
            }

            void drawCircle(int x, int y, int r, uint16_t color) override
            {
                TFT::drawCircle(x, y, r, color);
            }

            void fillCircle(int x, int y, int r, uint16_t color) override
            {
                TFT::fillCircle(x, y, r, color);
            }

            void drawLine(int x0, int y0, int x1, int y1, uint16_t color) override
            {
                TFT::drawLine(x0, y0, x1, y1, color);
            }
    };
}

#endif // TFT_SCREEN_H)
