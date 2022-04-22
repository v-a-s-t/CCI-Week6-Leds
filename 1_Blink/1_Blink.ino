#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 1

//What pin is DIN connected to
#define DATA_PIN 5

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() {
  // Uncomment/edit one of the following lines for your leds arrangement.
  FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS); // GRB ordering is assumed
}

void loop() {
  // Turn the LED on
  leds[0] = CRGB::Red;
  //needed to update the led
  FastLED.show();
  delay(500);
  // Now turn the LED off, then pause
  leds[0] = CRGB::Black;
  FastLED.show();
  delay(500);
}
