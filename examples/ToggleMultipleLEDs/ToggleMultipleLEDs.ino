#include "LEDArrayUCS1903.h"
#include <Bounce2.h>

LEDArrayUCS1903 LEDArray;

#define LED_PIN_A 24
#define LED_PIN_B 26
#define LED_PIN_C 28

#define PUSBUTTON_A 25 //turns off A while pressed
#define PUSBUTTON_B 27 //turns off B while pressed
#define PUSBUTTON_C 29 //turns off C while pressed

#define LED_COUNT_A 8
#define LED_COUNT_B 16
#define LED_COUNT_C 4

#define BUTTON_DEBOUNCE_PERIOD 100 //ms - for bounce API

RGB ledsA[LED_COUNT_A];
RGB ledsB[LED_COUNT_B];
RGB ledsC[LED_COUNT_C];

RGB red    = { 0xff, 0x00, 0x00}; // 'merica
RGB white  = { 0xff, 0xff, 0xff};
RGB blue   = { 0x00, 0x00, 0xff};

/* Bouce API to button presses */
Bounce a_button; 
Bounce b_button; 
Bounce c_button; 

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

//Setup the buttons as pullup input - the LED output will be 
//turned off while the button is pressed (grounded).
  pinMode(PUSBUTTON_A, INPUT_PULLUP);
  pinMode(PUSBUTTON_B, INPUT_PULLUP);
  pinMode(PUSBUTTON_C, INPUT_PULLUP);

//push button for A leds using Bounce API
  a_button = Bounce();
  a_button.attach(PUSBUTTON_A);
  a_button.interval(BUTTON_DEBOUNCE_PERIOD);
  a_button.update();

//push button for B leds using Bounce API
  b_button = Bounce();
  b_button.attach(PUSBUTTON_B);
  b_button.interval(BUTTON_DEBOUNCE_PERIOD);
  b_button.update();

//push button for C leds using Bounce API
  c_button = Bounce();
  c_button.attach(PUSBUTTON_C);
  c_button.interval(BUTTON_DEBOUNCE_PERIOD);
  c_button.update();    

}


void loop(){

  //check if state of button A was changed
  if (a_button.update()) {
    //state changed - if low pause otherwise resume
    if(a_button.read() == LOW){
      LEDArray.pause(LED_PIN_A);
    }else{
      LEDArray.resume(LED_PIN_A);
    }
  }
  
  //check if state of button B was changed
  if (b_button.update()) {
    //state changed - if low pause otherwise resume
    if(b_button.read() == LOW){
      LEDArray.pause(LED_PIN_B);
    }else{
      LEDArray.resume(LED_PIN_B);
    }
  }
  
  //check if state of button C was changed
  if (c_button.update()) {
    //state changed - if low pause otherwise resume
    if(c_button.read() == LOW){
      LEDArray.pause(LED_PIN_C);
    }else{
      LEDArray.resume(LED_PIN_C);
    }
  }

  //refresh LEDs
  LEDArray.show();
  delay(100);


}
