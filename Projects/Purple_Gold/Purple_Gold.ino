#include "FastLED.h"

#define NUM_LEDS 150
CRGB leds[NUM_LEDS];

typedef struct 
{
  int hue;
  int location;
} Color;

Color color1;
Color color2;

void setup()
{
  FastLED.addLeds<NEOPIXEL, 6>(leds, 150);

  color1.hue = 200;
  color1.location = 0;

  color2.hue = 40;
  color2.location = 1;
}

void loop()
{
  Increment(color1);
  Increment(color2);
  FastLED.show();
  delay(50);
}
void Increment(Color & color)
{
  leds[color.location] = CHSV(color.hue, 255, 255);
  color.location+=2;
}
