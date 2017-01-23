// Instructions: https://github.com/FastLED/FastLED/wiki/Overview

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
Color color3;

void setup()
{
  FastLED.addLeds<NEOPIXEL, 6>(leds, 150);

  color1.hue = 18;
  color1.location = 0;

  color2.hue = 100;
  color2.location = 50;

  color3.hue = 200;
  color3.location = 100;
}

void loop()
{
  Increment(color1);
  Increment(color2);
  Increment(color3);
  FastLED.show();
  delay(50);
}

void Increment(Color & color)
{
  if(color.location <= 100) {
    for(int i = color.location; i < color.location + 50; i++)
    {
      leds[i] = CHSV(color.hue, 255, 255);
    }
  }
  else
  {
    for(int i = color.location; i < NUM_LEDS; i++)
    {
      leds[i] = CHSV(color.hue, 255, 255);
    }
    for(int i = 0; i < 50 - (NUM_LEDS - color.location); i++)
    {
      leds[i] = CHSV(color.hue, 255, 255);
    }
  }
  color.location = (color.location + 1) % NUM_LEDS;
}

