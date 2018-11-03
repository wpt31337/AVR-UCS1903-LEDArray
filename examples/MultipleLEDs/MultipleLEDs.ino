#include "LEDArrayUCS1903.h"

LEDArrayUCS1903 LEDArray;

#define LED_PIN_A 24
#define LED_PIN_B 26
#define LED_PIN_C 28

#define LED_COUNT_A 8
#define LED_COUNT_B 16
#define LED_COUNT_C 4

RGB ledsA[LED_COUNT_A];
RGB ledsB[LED_COUNT_B];
RGB ledsC[LED_COUNT_C];

RGB red    = { 0xff, 0x00, 0x00}; // 'merica
RGB white  = { 0xff, 0xff, 0xff};
RGB blue   = { 0x00, 0x00, 0xff};


void setup() {

  LEDArray.setup<LED_PIN_A>(ledsA, LED_COUNT_A);
  LEDArray.setup<LED_PIN_B>(ledsB, LED_COUNT_B);
  LEDArray.setup<LED_PIN_C>(ledsC, LED_COUNT_C);


//Setup the A led array for all blue output
  for(int i=0; i<LED_COUNT_A; i++){
    ledsA[i] = red;
  }

//Setup the B led array for all blue output
  for(int i=0; i<LED_COUNT_B; i++){
    ledsB[i] = white;
  }

//Setup the C led array for all blue output
  for(int i=0; i<LED_COUNT_C; i++){
    ledsC[i] = blue;
  }
 

}


void loop(){


  LEDArray.show();
  delay(100);

}
