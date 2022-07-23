/*
  Maker's Asylum
  16x7 NeoPixel matrix Beer Bottle Display for Drill Press Cafe
  Modified 23 Jul 2022
  by Anool Mahidharia
  This example code is in the public domain.
*/


// MATRIX DECLARATION:
// Parameter 1 = width of NeoPixel matrix
// Parameter 2 = height of matrix
// Parameter 3 = pin number (most are valid)
// Parameter 4 = matrix layout flags, add together as needed:
//   NEO_MATRIX_TOP, NEO_MATRIX_BOTTOM, NEO_MATRIX_LEFT, NEO_MATRIX_RIGHT:
//     Position of the FIRST LED in the matrix; pick two, e.g.
//     NEO_MATRIX_TOP + NEO_MATRIX_LEFT for the top-left corner.
//   NEO_MATRIX_ROWS, NEO_MATRIX_COLUMNS: LEDs are arranged in horizontal
//     rows or in vertical columns, respectively; pick one or the other.
//   NEO_MATRIX_PROGRESSIVE, NEO_MATRIX_ZIGZAG: all rows/columns proceed
//     in the same order, or alternate lines reverse direction; pick one.
//   See example below for these values in action.
// Parameter 5 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)


#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#ifndef PSTR
#define PSTR 
#endif

#define PIN 6 // data pin, usual default is D6
#define mw 16 // width of the matrix in no of pixels
#define mh 7 // height of the matrix in no of pixels



Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(mw, mh, PIN,
  NEO_MATRIX_TOP    + NEO_MATRIX_LEFT + NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG,
  NEO_GRB            + NEO_KHZ800);

const uint16_t colors[] = {
  matrix.Color(255, 0, 0), matrix.Color(0, 255, 0), matrix.Color(0, 0, 255),
  matrix.Color(255, 255, 0), matrix.Color(0, 255, 255), matrix.Color(255, 0, 255),
  matrix.Color(255, 255, 255), matrix.Color(100, 255, 100), matrix.Color(200, 100, 255)};

void setup() {
  matrix.begin();
  matrix.setTextWrap(false);
  matrix.setBrightness(90);
  matrix.setTextColor(colors[0]);
}

int x    = matrix.width();
int pass = 0;

void loop() {
  matrix.fillScreen(0);
  matrix.setCursor(x,0);
  matrix.print(F("Drill Press Cafe!"));
//I'm not sure what the below number "100" does, but the original "50" didn't work - text would not scroll completely. So I progressively increased it until it worked.
  if(--x < -100) {
    x = matrix.width();
    if(++pass >= 9) pass = 0;
    matrix.setTextColor(colors[pass]);
  }
  matrix.show();
  delay(150);
}
