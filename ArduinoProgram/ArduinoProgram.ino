#include <FastLED.h>
#define NUM_LEDS 512
CRGB leds[NUM_LEDS];
uint8_t hue = 0;
//THIS IS A PROGRAM FOR SHOWING MOVING RAINBOW ANIMATION ON THE CUBE TO CHECK IF IT WORKS

void setup() { 
  FastLED.addLeds<WS2812, 48>(leds, NUM_LEDS); 
}

void loop() {
  fill_rainbow(leds, NUM_LEDS, hue, 255 / NUM_LEDS);
  hue++
}