#include "LEDArrayUCS1903.h"


LEDArrayUCS1903 LEDArray;

#define DIGITAL_PIN 28
#define LED_COUNT   16

RGB leds[LED_COUNT];

RGB onColor  = { 0xff, 0x00, 0xff}; //a pinkish hue
RGB offColor = { 0x00, 0x00, 0x00}; //no color for you!


void setup() {
  
  //initial setup - pin, led array, & number of elements in the array
  LEDArray.setup<DIGITAL_PIN>(leds, LED_COUNT);

}


void loop(){

//Copy the 'on' color to all RGB pixels
  assignColor(onColor);
  LEDArray.show();
  delay(200);

//Copy the 'off' color to all RGB pixels
  assignColor(offColor);
  LEDArray.show();
  delay(200);

}

//Copys the RGB pixel color to all elements in the global leds[] array
void assignColor(RGB color){
 
  for(int i=0; i<LED_COUNT; i++){
    leds[i] = color;
  }
    
}
