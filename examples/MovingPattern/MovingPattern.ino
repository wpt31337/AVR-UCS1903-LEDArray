#include "LEDArrayUCS1903.h"


LEDArrayUCS1903 LEDArray;

#define DIGITAL_PIN 28
#define LED_COUNT   16

RGB leds[LED_COUNT];

RGB red    = { 0xff, 0x00, 0x00}; // 'merica
RGB white  = { 0xff, 0xff, 0xff};
RGB blue   = { 0x00, 0x00, 0xff};


void setup() {

  //initial setup - pin, led array & number 0f led elements
  LEDArray.setup<DIGITAL_PIN>(leds, LED_COUNT);

}


void loop(){

//swetup RGB array with red, white, blue pattern
  assignColorPattern(red, white, blue);
  LEDArray.show();
  delay(500);

//'shift' the pattern over one LED
  assignColorPattern(blue, red, white);
  LEDArray.show();
  delay(500);
 
//'shift' the pattern over one more LED
  assignColorPattern(white, blue, red);
  LEDArray.show();
  delay(500);

}

void assignColorPattern(RGB c1, RGB c2, RGB c3){

  //assign LED array alternating colors starting with c1
  for(int i=0; i<LED_COUNT; i++){
    if((i % 3) == 0){
      leds[i]  = c1;
    }else if((i % 3) == 1){
      leds[i]  = c2;
    }else{
      leds[i]  = c3;
    }
  }
    
}
