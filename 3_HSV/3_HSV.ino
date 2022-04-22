#include <FastLED.h>

// How many leds
#define NUM_LEDS 2

//What pin is DIN connected to
#define DATA_PIN 5

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() {
  //Tell FastLED which type of addressable LED you are using.
  FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS); // GRB ordering is assumed
}

void loop() {

  //for loop through Hue on the first led, and saturation on the Second
  for (byte i = 0; i < 255; i++) {
    leds[0] = CHSV(i, 255, 255);
    leds[1] = CHSV( HUE_PURPLE, i, 255);
    FastLED.show();
    delay(20);
  }
}
