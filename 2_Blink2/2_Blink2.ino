#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 2

//What pin is DIN connected to
#define DATA_PIN 5

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() {
  // Uncomment/edit one of the following lines for your leds arrangement.
  FastLED.addLeds<NEOPIXEL, DATA_PIN, GRB>(leds, NUM_LEDS);  // GRB ordering is assumed
}

void loop() {
  // Turn the first LED Red
  leds[0] = CRGB::Red;
  // Turn the first LED Blue
  leds[1] = CRGB::Blue;
  //needed to update the led
  FastLED.show();
  delay(500);
  // Turn the first LED Red
  leds[0] = CRGB::Blue;
  // Turn the first LED Blue
  leds[1] = CRGB::Red;
  FastLED.show();
  delay(500);
}
