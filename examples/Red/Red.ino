#include "LEDArrayUCS1903.h"

LEDArrayUCS1903 LEDArray;

#define DIGITAL_PIN 23
#define LED_COUNT   16

RGB leds[LED_COUNT];

RGB red  = { 0xff, 0x00, 0x00};

void setup() {

  //initial setup - pin, led array and number of elements in the array
  LEDArray.setup<DIGITAL_PIN>(leds, LED_COUNT);

  //assign 'red' to all RGB pixels
  for(int i=0; i<LED_COUNT; i++){
    leds[i] = red;
  }

}


void loop(){

  LEDArray.show();
  delay(200);

}
