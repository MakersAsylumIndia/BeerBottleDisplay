#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 96

// For led chips like WS2812, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
// Clock pin only needed for SPI based chipsets when not using hardware SPI
#define DATA_PIN 6
//#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() {

  FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
}
int arrayDrill[] = {3,6,8,11,12,15,16,17,19,21,23,25,27,30,35,38,40,43,44,46,48,49,51,53,55,57,59,62,66,67,69,70,72,74,76,79,80};
int arrayPress[] = {1,2,4,5,7,8,11,12,14,15,16,17,19,21,23,25,28,31,33,34,36,37,39,40,43,44,46,47,48,49,53,55,57,61,64,65,66,68,69,71,72,74,76,80};
int arrayCafe[] = {2,3,4,6,7,8,11,14,15,16,17,21,23,25,29,35,36,39,40,42,44,48,49,53,54,55,57,61,66,67,68,72,74,76,78,79,80};

// int arrayMake[] = {1,2,4,6,9,12,16,17,18,20,21,23,25,27,28,31,33,34,38,40,42,44,46,48,49,53,55,56,57,59,60,63,65,66,68,70,72,74,76,80};
// int arrayGoa[] = {5,9,12,13,14,29,27,25,23,18,36,38,40,42,44,45,47,61,60,59,57,55,53,50,68,70,73,77,78};
// int arrayPune[] = {2,3,5,8,10,11,12,15,16,17,19,21,23,25,26,28,30,34,35,37,38,40,42,44,47,48,49,53,55,57,59,60,62,66,67,69,72,75,80};


void loop() {
  FastLED.clear();

  // Turn the LED on, then pause
  for (int i = 0; i <= 37; i++) {  //i needs to be number of LEDs in the array
    int  x = arrayDrill[i] - 1;
    leds[x] = CRGB::Red;
  }
  FastLED.show();
  delay(4000);
  for (int i = 0; i <= 37; i++) {
    int  x = arrayDrill[i] - 1;
    leds[x] = CRGB::Black;
    }
    FastLED.show();
    delay(100);


  for (int i = 0; i <= 43; i++) {
    int  x = arrayPress[i] - 1;
    leds[x] = CRGB::Green;
  }    
  FastLED.show();
  delay(4000);
    for (int i = 0; i <= 43; i++) {
    int  x = arrayPress[i] - 1;
    leds[x] = CRGB::Black;
    }
  FastLED.show();
  delay(100);


    for (int i = 0; i <= 36; i++) {
    int  x = arrayCafe[i] - 1;
    leds[x] = CRGB::Yellow;
    }
  FastLED.show();
  delay(4000);
    for (int i = 0; i <= 36; i++) {
    int  x = arrayCafe[i] - 1;
    leds[x] = CRGB::Black;
    }

  delay(1000);
}
