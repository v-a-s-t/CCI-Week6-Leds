#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 2

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
  for (byte i = 0; i < 255; i++) {
    leds[0] = CRGB(i, i, i);
    byte inverse = abs(255-i);
    leds[1] = CRGB(inverse, inverse, inverse);
    //needed to update the led
    FastLED.show();
    delay(20);
  }

}
