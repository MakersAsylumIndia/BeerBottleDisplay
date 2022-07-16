#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 96

// For led chips like WS2812, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
// Clock pin only needed for SPI based chipsets when not using hardware SPI
#define DATA_PIN 6
#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() {

  FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
}
int arrayDrill[] = {2,5,7,10,11,14,15,16,17,20,22,24,26,28,31,34,37,39,42,43,45,48,49,52,54,56,58,60,63,65,66,68,69,71,73,75,78,79,80};
int arrayPress[] = {1,2,4,5,7,8,10,11,12,14,15,16,17,19,21,23,25,28,31,33,34,36,37,39,40,43,44,46,47,48,49,53,55,57,61,64,65,66,68,69,71,72,74,76,80};
int arrayCafe[] = {2,3,4,6,7,8,11,14,15,16,17,21,23,25,29,34,35,36,38,39,40,42,43,44,48,49,53,55,57,61,66,67,68,72,74,76,78,79,80};

void loop() {
  // Turn the LED on, then pause
  for (int i = 0; i <= 39; i++) {  //i needs to be number of LEDs in the array
    int  x = arrayDrill[i] - 1;
    leds[x] = CRGB::Red;
  }
  FastLED.show();
  delay(3000);
  for (int i = 0; i <= 39; i++) {
    int  x = arrayDrill[i] - 1;
    leds[x] = CRGB::Black;
  }
  FastLED.show();
  delay(100);

    
  for (int i = 0; i <= 44; i++) {
    int  x = arrayPress[i] - 1;
    leds[x] = CRGB::Red;
  }
  FastLED.show();
  delay(3000);
  for (int i = 0; i <= 44; i++) {
    int  x = arrayPress[i] - 1;
    leds[x] = CRGB::Black;
  }
  FastLED.show();
  delay(100);


  for (int i = 0; i <= 37; i++) {
    int  x = arrayCafe[i] - 1;
    leds[x] = CRGB::Red;
  }
  FastLED.show();
  delay(3000);
    for (int i = 0; i <= 37; i++) {
    int  x = arrayCafe[i] - 1;
    leds[x] = CRGB::Black;
  }
  FastLED.show();
  delay(100);
}
