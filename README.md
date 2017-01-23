# LED_Strip
Code for an LED Strip

Reference

Define the array of leds
	CRGB leds[NUM_LEDS];

Setup the led array (in setup)
	FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);

Update the led colors
	FastLED.show();

Set the first led to red
	leds[0] = CRGB::Red;

Setting CRGB color
	CRGB(red, green, blue); // all parameters are 0-255

Setting CHSV color
	CHSV(hue, saturation, value); // all parameters are 0-255

CHSV Hues
	Red - 0
	Orange - 32
	Yellow - 64
	Green - 96
	Aqua - 128
	Blue - 160
	Purple - 192
	Pink - 224