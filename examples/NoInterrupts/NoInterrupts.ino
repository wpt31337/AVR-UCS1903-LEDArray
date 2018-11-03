#include "LEDArrayUCS1903.h"


LEDArrayUCS1903 LEDArray;

/* Theorectically, the only way this program could interfere with other 
 *  shields or programs is pin selection (which you can control) or interrupt 
 *  blocking - which you can also coontrol! To stop the LEDArray.show() from 
 *  blocking interrupts, simply add #define NO_INTERRUPTS. However, since the 
 *  UCS1903 is a 3-wire clockless chip, this is will impact the LED array 
 *  performance since handled interrupts will mess with the chip timing.  
 *  Thid is mostly evidenced by unwanted 'color pops'.  
 */

#define NO_INTERRUPTS

#define DIGITAL_PIN 28
#define LED_COUNT   16

RGB leds[LED_COUNT];

RGB blue   = { 0x00, 0x00, 0xff};


void setup() {

  //initial setup - pin, led array & number 0f led elements
  LEDArray.setup<DIGITAL_PIN>(leds, LED_COUNT);
  
  //assign 'blue' to all RGB pixels
  for(int i=0; i<LED_COUNT; i++){
    leds[i] = blue;
  }
}


void loop(){


  LEDArray.show();
  delay(100);

}
