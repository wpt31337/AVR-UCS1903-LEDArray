//
//  LEDArrayUCS1903.cpp
//
//  Copyright (c) 2018 W. Patrick Tunney.  All right reserved.
//

#include <Arduino.h>
#include <pins_arduino.h>
#include "LEDArrayUCS1903.h"

// include description files for other libraries used (if any)
#include "HardwareSerial.h"

#define STARTING_ACTIVE_PINS 4



funcPtr *currentTransitions;
int currentSize = 0;


LEDArrayUCS1903::LEDArrayUCS1903(){
    
    activePinCount = 0;
    arraySize = STARTING_ACTIVE_PINS;
    pins = new LEDArrayUCS1903InternalP* [STARTING_ACTIVE_PINS];
    for(int i=0; i<STARTING_ACTIVE_PINS; i++){
        pins[i] = NULL;
    }
}

bool LEDArrayUCS1903::show(){
    

    if(activePinCount == 0){
        return false;
    }
    
    int count = activePinCount;
    for(int i=0; i<arraySize; i++){
        if(pins[i]){
            pins[i]->turnOnTransitions();
            
            count--;
        }
        if(count == 0){
            break;
        }
    }
    return true;
    

}

bool LEDArrayUCS1903::pause(int pin){
    
    for(int i=0; i<activePinCount; i++){
        
        if(pins[i]){
        
            if(pins[i]->getID() == pin){
                pins[i]->pause();
                return true;
            }
        }
        
    }
    
    return false;
}

bool LEDArrayUCS1903::resume(int pin){
 
    
    for(int i=0; i<activePinCount; i++){
        
        if(pins[i]){
            
            if(pins[i]->getID() == pin){
                pins[i]->resume();
                return true;
            }
        }
        
    }
    
    return false;
}


bool LEDArrayUCS1903::remove(int pin){
    
    
    if(activePinCount == 0){
        return false;
    }
    
    int removeIndex = -1;
    
    //we defend against duplicate pin additions in setup<>()
    for(int i=0; i<activePinCount; i++){
        if(pins[i]){
            if(removeIndex != -1){
                pins[i-1] = pins[i];
            }else if(pins[i]->getID() == pin){
                delete pins[i];
                removeIndex = i;
                activePinCount--;
            }
        }
    
    }

    
    return true;
    
}



LEDArrayUCS1903InternalP::LEDArrayUCS1903InternalP(){

    pin = -1;
}


int LEDArrayUCS1903InternalP::getID(){
    
    return pin;
}

LEDArrayUCS1903InternalP::~LEDArrayUCS1903InternalP(){}








