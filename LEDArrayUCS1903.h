//
//  LEDArrayUCS1903.h
//  
//  Copyright (c) 2018 W. Patrick Tunney.  All right reserved.
//
//

#ifndef _LEDArrayUCS1903_h
#define _LEDArrayUCS1903_h

#include <Arduino.h>


#define _PASTER(A,B) A ## B
#define _CLOCKIT(A) CLOCK_IT_ ## A
#define _DELAY_CYCLES(A) _PASTER(CLOCK_IT_,A)



#if defined(__AVR_ATmega168__) || defined(__AVR_ATmega328P__)
//Arduino Uno


#define PORT_PIN_0 PORTD
#define PORT_PIN_1 PORTD
#define PORT_PIN_2 PORTD
#define PORT_PIN_3 PORTD
#define PORT_PIN_4 PORTD
#define PORT_PIN_5 PORTD
#define PORT_PIN_6 PORTD
#define PORT_PIN_7 PORTD
#define PORT_PIN_8 PORTB
#define PORT_PIN_9 PORTB
#define PORT_PIN_10 PORTB
#define PORT_PIN_11 PORTB
#define PORT_PIN_12 PORTB
#define PORT_PIN_13 PORTB


#define BIT_PIN_0 0
#define BIT_PIN_1 1
#define BIT_PIN_2 2
#define BIT_PIN_3 3
#define BIT_PIN_4 4
#define BIT_PIN_5 5
#define BIT_PIN_6 6
#define BIT_PIN_7 7
#define BIT_PIN_8 0
#define BIT_PIN_9 1
#define BIT_PIN_10 2
#define BIT_PIN_11 3
#define BIT_PIN_12 4
#define BIT_PIN_13 5


#elif defined(__AVR_ATmega2560__) || defined(__AVR_ATmega1280__)
//Arduino Mega


//taken from const uint8_t PROGMEM digital_pin_to_bit_mask_PGM[] in pins_arduino.h for MEGA

#define BIT_PIN_0  0 // PE 0 ** 0 ** USART0_RX
#define BIT_PIN_1  1 // PE 1 ** 1 ** USART0_TX
#define BIT_PIN_2  4 // PE 4 ** 2 ** PWM2
#define BIT_PIN_3  5 // PE 5 ** 3 ** PWM3
#define BIT_PIN_4  5 // PG 5 ** 4 ** PWM4
#define BIT_PIN_5  3 // PE 3 ** 5 ** PWM5
#define BIT_PIN_6  3 // PH 3 ** 6 ** PWM6
#define BIT_PIN_7  4 // PH 4 ** 7 ** PWM7
#define BIT_PIN_8  5 // PH 5 ** 8 ** PWM8
#define BIT_PIN_9  6 // PH 6 ** 9 ** PWM9
#define BIT_PIN_10 4 // PB 4 ** 10 ** PWM10
#define BIT_PIN_11 5 // PB 5 ** 11 ** PWM11
#define BIT_PIN_12 6 // PB 6 ** 12 ** PWM12
#define BIT_PIN_13 7 // PB 7 ** 13 ** PWM13
#define BIT_PIN_14 1 // PJ 1 ** 14 ** USART3_TX
#define BIT_PIN_15 0 // PJ 0 ** 15 ** USART3_RX
#define BIT_PIN_16 1 // PH 1 ** 16 ** USART2_TX
#define BIT_PIN_17 0 // PH 0 ** 17 ** USART2_RX
#define BIT_PIN_18 3 // PD 3 ** 18 ** USART1_TX
#define BIT_PIN_19 2 // PD 2 ** 19 ** USART1_RX
#define BIT_PIN_20 1 // PD 1 ** 20 ** I2C_SDA
#define BIT_PIN_21 0 // PD 0 ** 21 ** I2C_SCL
#define BIT_PIN_22 0 // PA 0 ** 22 ** D22
#define BIT_PIN_23 1 // PA 1 ** 23 ** D23
#define BIT_PIN_24 2 // PA 2 ** 24 ** D24
#define BIT_PIN_25 3 // PA 3 ** 25 ** D25
#define BIT_PIN_26 4 // PA 4 ** 26 ** D26
#define BIT_PIN_27 5 // PA 5 ** 27 ** D27
#define BIT_PIN_28 6 // PA 6 ** 28 ** D28
#define BIT_PIN_29 7 // PA 7 ** 29 ** D29
#define BIT_PIN_30 7 // PC 7 ** 30 ** D30
#define BIT_PIN_31 6 // PC 6 ** 31 ** D31
#define BIT_PIN_32 5 // PC 5 ** 32 ** D32
#define BIT_PIN_33 4 // PC 4 ** 33 ** D33
#define BIT_PIN_34 3 // PC 3 ** 34 ** D34
#define BIT_PIN_35 2 // PC 2 ** 35 ** D35
#define BIT_PIN_36 1 // PC 1 ** 36 ** D36
#define BIT_PIN_37 0 // PC 0 ** 37 ** D37
#define BIT_PIN_38 7 // PD 7 ** 38 ** D38
#define BIT_PIN_39 2 // PG 2 ** 39 ** D39
#define BIT_PIN_40 1 // PG 1 ** 40 ** D40
#define BIT_PIN_41 0 // PG 0 ** 41 ** D41
#define BIT_PIN_42 7 // PL 7 ** 42 ** D42
#define BIT_PIN_43 6 // PL 6 ** 43 ** D43
#define BIT_PIN_44 5 // PL 5 ** 44 ** D44
#define BIT_PIN_45 4 // PL 4 ** 45 ** D45
#define BIT_PIN_46 3 // PL 3 ** 46 ** D46
#define BIT_PIN_47 2 // PL 2 ** 47 ** D47
#define BIT_PIN_48 1 // PL 1 ** 48 ** D48
#define BIT_PIN_49 0 // PL 0 ** 49 ** D49
#define BIT_PIN_50 3 // PB 3 ** 50 ** SPI_MISO
#define BIT_PIN_51 2 // PB 2 ** 51 ** SPI_MOSI
#define BIT_PIN_52 1 // PB 1 ** 52 ** SPI_SCK
#define BIT_PIN_53 0 // PB 0 ** 53 ** SPI_SS
#define BIT_PIN_54 0 // PF 0 ** 54 ** A0
#define BIT_PIN_55 1 // PF 1 ** 55 ** A1
#define BIT_PIN_56 2 // PF 2 ** 56 ** A2
#define BIT_PIN_57 3 // PF 3 ** 57 ** A3
#define BIT_PIN_58 4 // PF 4 ** 58 ** A4
#define BIT_PIN_59 5 // PF 5 ** 59 ** A5
#define BIT_PIN_60 6 // PF 6 ** 60 ** A6
#define BIT_PIN_61 7 // PF 7 ** 61 ** A7
#define BIT_PIN_62 0 // PK 0 ** 62 ** A8
#define BIT_PIN_63 1 // PK 1 ** 63 ** A9
#define BIT_PIN_64 2 // PK 2 ** 64 ** A10
#define BIT_PIN_65 3 // PK 3 ** 65 ** A11
#define BIT_PIN_66 4 // PK 4 ** 66 ** A12
#define BIT_PIN_67 5 // PK 5 ** 67 ** A13
#define BIT_PIN_68 6 // PK 6 ** 68 ** A14
#define BIT_PIN_69 7 // PK 7 ** 69 ** A15

//taken from const uint8_t PROGMEM digital_pin_to_port_PGM[] in pins_arduino.h for MEGA
#define PORT_PIN_0 PORTE // PE 0 ** 0 ** USART0_RX
#define PORT_PIN_1 PORTE // PE 1 ** 1 ** USART0_TX
#define PORT_PIN_2 PORTE // PE 4 ** 2 ** PWM2
#define PORT_PIN_3 PORTE // PE 5 ** 3 ** PWM3
#define PORT_PIN_4 PORTG // PG 5 ** 4 ** PWM4
#define PORT_PIN_5 PORTE // PE 3 ** 5 ** PWM5
#define PORT_PIN_6 PORTH // PH 3 ** 6 ** PWM6
#define PORT_PIN_7 PORTH // PH 4 ** 7 ** PWM7
#define PORT_PIN_8 PORTH // PH 5 ** 8 ** PWM8
#define PORT_PIN_9 PORTH // PH 6 ** 9 ** PWM9
#define PORT_PIN_10 PORTB // PB 4 ** 10 ** PWM10
#define PORT_PIN_11 PORTB // PB 5 ** 11 ** PWM11
#define PORT_PIN_12 PORTB // PB 6 ** 12 ** PWM12
#define PORT_PIN_13 PORTB // PB 7 ** 13 ** PWM13
#define PORT_PIN_14 PORTJ // PJ 1 ** 14 ** USART3_TX
#define PORT_PIN_15 PORTJ // PJ 0 ** 15 ** USART3_RX
#define PORT_PIN_16 PORTH // PH 1 ** 16 ** USART2_TX
#define PORT_PIN_17 PORTH // PH 0 ** 17 ** USART2_RX
#define PORT_PIN_18 PORTD // PD 3 ** 18 ** USART1_TX
#define PORT_PIN_19 PORTD // PD 2 ** 19 ** USART1_RX
#define PORT_PIN_20 PORTD // PD 1 ** 20 ** I2C_SDA
#define PORT_PIN_21 PORTD // PD 0 ** 21 ** I2C_SCL
#define PORT_PIN_22 PORTA // PA 0 ** 22 ** D22
#define PORT_PIN_23 PORTA // PA 1 ** 23 ** D23
#define PORT_PIN_24 PORTA // PA 2 ** 24 ** D24
#define PORT_PIN_25 PORTA // PA 3 ** 25 ** D25
#define PORT_PIN_26 PORTA // PA 4 ** 26 ** D26
#define PORT_PIN_27 PORTA // PA 5 ** 27 ** D27
#define PORT_PIN_28 PORTA // PA 6 ** 28 ** D28
#define PORT_PIN_29 PORTA // PA 7 ** 29 ** D29
#define PORT_PIN_30 PORTC // PC 7 ** 30 ** D30
#define PORT_PIN_31 PORTC // PC 6 ** 31 ** D31
#define PORT_PIN_32 PORTC // PC 5 ** 32 ** D32
#define PORT_PIN_33 PORTC // PC 4 ** 33 ** D33
#define PORT_PIN_34 PORTC // PC 3 ** 34 ** D34
#define PORT_PIN_35 PORTC // PC 2 ** 35 ** D35
#define PORT_PIN_36 PORTC // PC 1 ** 36 ** D36
#define PORT_PIN_37 PORTC // PC 0 ** 37 ** D37
#define PORT_PIN_38 PORTD // PD 7 ** 38 ** D38
#define PORT_PIN_39 PORTG // PG 2 ** 39 ** D39
#define PORT_PIN_40 PORTG // PG 1 ** 40 ** D40
#define PORT_PIN_41 PORTG // PG 0 ** 41 ** D41
#define PORT_PIN_42 PORTL // PL 7 ** 42 ** D42
#define PORT_PIN_43 PORTL // PL 6 ** 43 ** D43
#define PORT_PIN_44 PORTL // PL 5 ** 44 ** D44
#define PORT_PIN_45 PORTL // PL 4 ** 45 ** D45
#define PORT_PIN_46 PORTL // PL 3 ** 46 ** D46
#define PORT_PIN_47 PORTL // PL 2 ** 47 ** D47
#define PORT_PIN_48 PORTL // PL 1 ** 48 ** D48
#define PORT_PIN_49 PORTL // PL 0 ** 49 ** D49
#define PORT_PIN_50 PORTB // PB 3 ** 50 ** SPI_MISO
#define PORT_PIN_51 PORTB // PB 2 ** 51 ** SPI_MOSI
#define PORT_PIN_52 PORTB // PB 1 ** 52 ** SPI_SCK
#define PORT_PIN_53 PORTB // PB 0 ** 53 ** SPI_SS
#define PORT_PIN_54 PORTF // PF 0 ** 54 ** A0
#define PORT_PIN_55 PORTF // PF 1 ** 55 ** A1
#define PORT_PIN_56 PORTF // PF 2 ** 56 ** A2
#define PORT_PIN_57 PORTF // PF 3 ** 57 ** A3
#define PORT_PIN_58 PORTF // PF 4 ** 58 ** A4
#define PORT_PIN_59 PORTF // PF 5 ** 59 ** A5
#define PORT_PIN_60 PORTF // PF 6 ** 60 ** A6
#define PORT_PIN_61 PORTF // PF 7 ** 61 ** A7
#define PORT_PIN_62 PORTK // PK 0 ** 62 ** A8
#define PORT_PIN_63 PORTK // PK 1 ** 63 ** A9
#define PORT_PIN_64 PORTK // PK 2 ** 64 ** A10
#define PORT_PIN_65 PORTK // PK 3 ** 65 ** A11
#define PORT_PIN_66 PORTK // PK 4 ** 66 ** A12
#define PORT_PIN_67 PORTK // PK 5 ** 67 ** A13
#define PORT_PIN_68 PORTK // PK 6 ** 68 ** A14
#define PORT_PIN_69 PORTK // PK 7 ** 69 ** A15


#else

#warning Using pin outs for undefined board. See source file note!

#endif





/* 
 
 Notes on warning message "Using pin outs for undefined board. See source file note!"
 
 If the above warning message is displayed then you need to pin mappings for your board.
 It would be great if I could determine all of this dynamically at run time but the 
 timings on the 400Kbs transfer mode are pretty tight so I need to use compile time
 class templates which require static data in the file.
 
 Simply add a section of above to with correct pin mapping data in the form and drop 
 me a note so I can add them to the code! You also dont need to add data for all the 
 pins, just the one(s) you want to use.
 
 Hope it works for you. If it does let me know. I have tested after compiling with Arduino version 1.8.7
 Its definately in the realm of possibility that another version of of the Arduino IDE will use a different 
 gcc version or build flags that could change the byte code generated after compile such that the timing 
 of the program is off. If that happens it is still possible to inspect the byte code and monkey with the 
 following defines (but you are better off with an oscilliscope and a probe).
 #define DELAY_CYCLES_START 30  
 #define DELAY_CYCLES_LONG 10  
 #define DELAY_CYCLES_SHORT 6
 
 As far as just adding pins, uncomment the #elseif below, add you board from the verbose compiler output and define 
 the pins and ports according to your board.

 #elseif defined(you board here)
 
 #define PORT_PIN_22 PORTA
 #define PORT_PIN_23 PORTA
 ...
 #define BIT_PIN_22 0
 #define BIT_PIN_23 1
 ...
 
 
*/



#define NOP __asm__("nop\n\t");
#define CLOCK_IT_1  ({NOP;})
#define CLOCK_IT_2  ({NOP;NOP;})
#define CLOCK_IT_3  ({NOP;NOP;NOP;})
#define CLOCK_IT_4  ({NOP;NOP;NOP;NOP;})
#define CLOCK_IT_5  ({NOP;NOP;NOP;NOP;NOP;})
#define CLOCK_IT_6  ({NOP;NOP;NOP;NOP;NOP;NOP;})
#define CLOCK_IT_7  ({NOP;NOP;NOP;NOP;NOP;NOP;NOP;})
#define CLOCK_IT_8  ({NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;})
#define CLOCK_IT_9  ({NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;})
#define CLOCK_IT_10 ({NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;})
#define CLOCK_IT_11 ({NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;})
#define CLOCK_IT_12 ({NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;})
#define CLOCK_IT_14 ({NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;})
#define CLOCK_IT_30 ({NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;})
#define CLOCK_IT_42 ({NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;})
#define CLOCK_IT_62 ({NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;NOP;})



#if !defined(F_CPU)

#error F_CPU symbol not defined - required compile flag!

#endif


//should work at 8MHz since the chip supports a slow mode which is twice as slow - not tested though so good luck

#if F_CPU == 16000000L || F_CPU == 8000000L

#define CYCLES_LONG 32    //2000 ns
#define CYCLES_SHORT 8     // 500 ns
#define CYCLES_BITSET 2
#define CYCLES_LOOP 20
#define DELAY_CYCLES_START 30 //32 - 2
#define DELAY_CYCLES_LONG 10  //32 - (20 + 2)
#define DELAY_CYCLES_SHORT 6  //8 - 2

#else

#error F_CPU clock speed not supported

#endif

#if F_CPU == 8000000L

#warning Not tested on a 8MHz board - theoretically it should work. I tested at 16MHz using 2x delays (UCS1903 has a slow mode)

#endif


#define MILLISECONDS_BEFORE_SEND 5
#define MILLISECONDS_AFTER_SEND  5


#define LED_BIT_HIGH (true)
#define LED_BIT_LOW (false)


struct RGB {
    uint8_t r;
    uint8_t g;
    uint8_t b;
};

typedef RGB* RGB_t;
typedef void (*funcPtr)(void);


class LEDArrayUCS1903InternalP;

class LEDArrayUCS1903{
    
public:
    
    LEDArrayUCS1903();
    
    template <int A> int setup(RGB *data, int noNolors);
    
    bool show();
    bool remove(int pin);
    bool pause(int pin);
    bool resume(int pin);
    
private:
    
    int activePinCount;
    
    int arraySize;
    
    LEDArrayUCS1903InternalP **pins;
    
};




class LEDArrayUCS1903InternalP {

    public:
        LEDArrayUCS1903InternalP();
        virtual ~LEDArrayUCS1903InternalP();
        int getID();
    

        virtual void pause()=0;
        virtual void resume()=0;
        virtual void turnOnTransitions()=0;
        virtual void assignColors(RGB *data, int numberOfElements)=0;

    protected:
        int pin;
        RGB_t sourceRGB;
        int sourceSize;
    
};




template <int A>
class LEDArrayUCS1903Internal : LEDArrayUCS1903InternalP {
    
public:
    
    LEDArrayUCS1903Internal();
    
    ~LEDArrayUCS1903Internal();
    
    void turnOnTransitions();
    
    void refreshColors();
    
    void assignColors(RGB *data, int numberOfElements);
    
    void resume();

    void pause();
    
    static void transitionLowHighStart();
    
    static void transitionLowLowStart();
    
    static void transitionHighHighStart();
    
    static void transitionHighLowStart();
    
    static void transitionHighHigh();
    
    static void transitionHighLow();
    
    static void transitionLowHigh();
    
    static void transitionLowLow();
    
    static void transitionHighEnd();
    
    static void transitionLowEnd();
    
    static inline void setBit();
    
    static inline void resetBit();

    
private:
 
    funcPtr *transitions;
    int numberOfTransitions;
    int totalTransitionSize;
    boolean sendActive;
};



template <int A>
int LEDArrayUCS1903::setup(RGB_t data, int numColors){
    

    LEDArrayUCS1903InternalP *ptr  = nullptr;
    
    int index = 0;
    
    //Check incoming Port and Pin to make sure its not already setup and active.

    int count = activePinCount;
    
    for(int i=0; i<count; i++){
        
        if(pins[i]){
            if (pins[i]->getID() == A){
                //pin already active - remove so we can start fresh
                remove(A);
                break;
            }
        }
    }
    
    if(activePinCount == arraySize){
            
        //we're maxed out.
        arraySize = arraySize * 2;
        LEDArrayUCS1903InternalP **tempPins = new LEDArrayUCS1903InternalP* [arraySize];
            
        for(int i=0; i<arraySize; i++){
            if(i < activePinCount){
                tempPins[i] = pins[i];
            }else{
                tempPins[i] = NULL;
            }
        }
        delete [] pins;
        pins = tempPins;
        
    }
        
    ptr = (LEDArrayUCS1903InternalP *) new LEDArrayUCS1903Internal<A>();
    index = activePinCount;
    pins[index] = ptr;
    activePinCount++;
    
    ptr->assignColors(data, numColors);

    return index;
    
}


#define _TEMPLATE_SET_RESET(A) template <> inline void __attribute__((always_inline))LEDArrayUCS1903Internal<A>::setBit(){ PORT_PIN_ ## A |= _BV(BIT_PIN_ ## A);};template <> inline void __attribute__((always_inline))LEDArrayUCS1903Internal<A>::resetBit(){ PORT_PIN_ ## A &= ~_BV(BIT_PIN_ ## A);};




template <int A> inline void __attribute__((always_inline))
LEDArrayUCS1903Internal<A>::setBit(){

}

template <int A> inline void __attribute__((always_inline))
LEDArrayUCS1903Internal<A>::resetBit(){
    
}

template <int A>  void
LEDArrayUCS1903Internal<A>::pause(){
    
    sendActive = false;
}

template <int A>  void
LEDArrayUCS1903Internal<A>::resume(){

    sendActive = true;

    
}


template <int A>  void
LEDArrayUCS1903Internal<A>::transitionLowHighStart(){
    //start high
    setBit();
    _DELAY_CYCLES(DELAY_CYCLES_SHORT);
    
    //start low
    resetBit();
    _DELAY_CYCLES(DELAY_CYCLES_START);
    
    //start high for next H and exit.
    setBit();
}

template <int A>   void
LEDArrayUCS1903Internal<A>::transitionLowLowStart(){
    
    //start high
    setBit();
    _DELAY_CYCLES(DELAY_CYCLES_SHORT);
    
    //start low
    resetBit();
    _DELAY_CYCLES(DELAY_CYCLES_START);
    
    //clock high to do first half of next cycle
    setBit();
    _DELAY_CYCLES(DELAY_CYCLES_SHORT);
    
    //start low portion of next low and exit so L can take over
    resetBit();
    
}

template <int A>   void
LEDArrayUCS1903Internal<A>::transitionHighHighStart(){
    //start high
    setBit();
    _DELAY_CYCLES(DELAY_CYCLES_START);
    
    //clock low and then start next high
    resetBit();
    _DELAY_CYCLES(DELAY_CYCLES_SHORT);
    
    setBit();
}

template <int A>   void
LEDArrayUCS1903Internal<A>::transitionHighLowStart(){
    
    setBit();
    _DELAY_CYCLES(DELAY_CYCLES_START);
    
    //clock low, then clock high and then start low for next L()
    resetBit();
    _DELAY_CYCLES(DELAY_CYCLES_SHORT);
    
    setBit();
    _DELAY_CYCLES(DELAY_CYCLES_SHORT);
    
    resetBit();
}

template <int A>   void
LEDArrayUCS1903Internal<A>::transitionHighHigh(){
    
    //finish out high part of cycles
    _DELAY_CYCLES(DELAY_CYCLES_LONG);
    
    //clock low and then start next high
    resetBit();
    _DELAY_CYCLES(DELAY_CYCLES_SHORT);
    
    //Start next high
    setBit();
}

template <int A>   void
LEDArrayUCS1903Internal<A>::transitionHighLow(){
    //finish out high part of cycles
    _DELAY_CYCLES(DELAY_CYCLES_LONG);
    
    //clock low for low part of this cycle.
    resetBit();
    _DELAY_CYCLES(DELAY_CYCLES_SHORT);
    
    //do the high part of next cycle
    setBit();
    _DELAY_CYCLES(DELAY_CYCLES_SHORT);
    
    //start low part of next cycle and exit
    resetBit();
}

template <int A>   void
LEDArrayUCS1903Internal<A>::transitionLowHigh(){
    
    //finish low transition
    _DELAY_CYCLES(DELAY_CYCLES_LONG);
    
    //start next high and exit for H can take over
    setBit();
}

template <int A>   void
LEDArrayUCS1903Internal<A>::transitionLowLow(){
    //finish low transition
    _DELAY_CYCLES(DELAY_CYCLES_LONG);
    
    //clock high to do forst half of next cycle
    setBit();
    _DELAY_CYCLES(DELAY_CYCLES_SHORT);
    
    //start low portio of next low and exit so L can take over
    resetBit();
}

template <int A>   void
LEDArrayUCS1903Internal<A>::transitionHighEnd(){
    
    //finish out high part of cycles
    _DELAY_CYCLES(DELAY_CYCLES_LONG);
    
    //clock low
    resetBit();
    _DELAY_CYCLES(DELAY_CYCLES_SHORT);
    
 
}

template <int A>   void
LEDArrayUCS1903Internal<A>::transitionLowEnd(){
    
    //finish low transition
    _DELAY_CYCLES(DELAY_CYCLES_LONG);
    

}

template <int A>
LEDArrayUCS1903Internal<A>::LEDArrayUCS1903Internal() : LEDArrayUCS1903InternalP(){
    
    pin = A;
    pinMode(A, OUTPUT);
    delay(100);
    sendActive = true;
    numberOfTransitions = 0;
    totalTransitionSize = 0;
    transitions = nullptr;
}

template <int A>
LEDArrayUCS1903Internal<A>::~LEDArrayUCS1903Internal() {

    if(totalTransitionSize > 0){
        delete [] transitions;
        totalTransitionSize = 0;
    }
}

template <int A>
void LEDArrayUCS1903Internal<A>::turnOnTransitions(){
    
    
    if(!sendActive){
        return;
    }
    
    refreshColors();
    
    resetBit();
    delay(MILLISECONDS_BEFORE_SEND);
    
    
#ifndef NO_INTERRUPTS
    noInterrupts();
#endif
   
    
    funcPtr *p    = &transitions[0];
    funcPtr *last = &transitions[numberOfTransitions-1];
    
    while(p != last){
        (*p)();
        p++;
    }
    (*last)();
    
    
#ifndef NO_INTERRUPTS
    interrupts();
#endif
    
    resetBit();
    delay(MILLISECONDS_AFTER_SEND);
    
}


template <int A>
void LEDArrayUCS1903Internal<A>::refreshColors(){
    
    if(sourceSize <= 0){
        return;
    }
    
    //initial size calculations
    int totalBits = sourceSize*24;
    boolean *bits = new boolean[totalBits];
    
    if(totalBits > totalTransitionSize){
        delete [] transitions;
    }
    
    if((numberOfTransitions ==  0) || (totalBits > totalTransitionSize)){
        
        transitions = new funcPtr[totalBits];
        totalTransitionSize = totalBits;
        numberOfTransitions = totalBits;
        
    }else if(totalBits < totalTransitionSize){
        
        numberOfTransitions = totalBits;
        
    }
    
    
    
    uint8_t r;
    uint8_t g;
    uint8_t b;
    
    // Convert the RGB color assignments to a continuous array of booleans for
    // subsequent sequence analysis.
    //
    
    // Blue //
    for (int z=0; z<sourceSize; z++){
        
        b = sourceRGB[z].b;
        
        for(int i=0; i<8; i++){
            
            if ((b & 0x80) == 0x80){
                
                bits[z*24+i] = LED_BIT_HIGH;
                
            }else{
                
                bits[z*24+i] = LED_BIT_LOW;
            }
            
            
            
            b = b << 1;
        }
        
        // Red //
        r = sourceRGB[z].r;
        for(int j=0; j<8; j++){
            if ((r & 0x80) == 0x80){
                bits[z*24+8+j] = LED_BIT_HIGH;
            }else{
                bits[z*24+8+j] = LED_BIT_LOW;
            }
            
            r = r << 1;
        }
        
        // Green //
        g = sourceRGB[z].g;
        for(int k=0; k<8; k++){
            if ((g & 0x80) == 0x80){
                bits[z*24+16+k] = LED_BIT_HIGH;
            }else{
                bits[z*24+16+k] = LED_BIT_LOW;
            }
            
            g = g << 1;
        }
    }
    
    
    
    if(bits[0] == LED_BIT_HIGH){
        if(bits[1] == LED_BIT_HIGH){
            transitions[0] = &transitionHighHighStart;
        }else{
            transitions[0] = &transitionHighLowStart;
        }
    }else{
        if(bits[1] == LED_BIT_HIGH){
            transitions[0] = &transitionLowHighStart;
        }else{
            transitions[0] = &transitionLowLowStart;
        }
    }
    
    for(int i=1; i<(totalBits-1); i++){
        
        if(bits[i] == LED_BIT_HIGH){
            if(bits[i+1] == LED_BIT_HIGH){
                transitions[i] = &transitionHighHigh;
            }else{
                transitions[i] = &transitionHighLow;
            }
        }else{
            if(bits[i+1] == LED_BIT_HIGH){
                transitions[i] = &transitionLowHigh;
            }else{
                transitions[i] = &transitionLowLow;
            }
        }
    }
    
    
    if(bits[totalBits-1] == LED_BIT_HIGH){
        transitions[totalBits-1] = &transitionHighEnd;
    }else{
        transitions[totalBits-1] = &transitionLowEnd;
    }
    
    delete [] bits;

    
}

template <int A>
void LEDArrayUCS1903Internal<A>::assignColors(RGB_t data, int numberOfElements){
   
    sourceRGB = data;
    sourceSize = numberOfElements;
    
}




#if defined(PORT_PIN_0) && defined(BIT_PIN_0)
_TEMPLATE_SET_RESET(0)
#endif
#if defined(PORT_PIN_1) && defined(BIT_PIN_1)
_TEMPLATE_SET_RESET(1)
#endif
#if defined(PORT_PIN_2) && defined(BIT_PIN_2)
_TEMPLATE_SET_RESET(2)
#endif
#if defined(PORT_PIN_3) && defined(BIT_PIN_3)
_TEMPLATE_SET_RESET(3)
#endif
#if defined(PORT_PIN_4) && defined(BIT_PIN_4)
_TEMPLATE_SET_RESET(4)
#endif
#if defined(PORT_PIN_5) && defined(BIT_PIN_5)
_TEMPLATE_SET_RESET(5)
#endif
#if defined(PORT_PIN_6) && defined(BIT_PIN_6)
_TEMPLATE_SET_RESET(6)
#endif
#if defined(PORT_PIN_7) && defined(BIT_PIN_7)
_TEMPLATE_SET_RESET(7)
#endif
#if defined(PORT_PIN_8) && defined(BIT_PIN_8)
_TEMPLATE_SET_RESET(8)
#endif
#if defined(PORT_PIN_9) && defined(BIT_PIN_9)
_TEMPLATE_SET_RESET(9)
#endif
#if defined(PORT_PIN_10) && defined(BIT_PIN_10)
_TEMPLATE_SET_RESET(10)
#endif
#if defined(PORT_PIN_11) && defined(BIT_PIN_11)
_TEMPLATE_SET_RESET(11)
#endif
#if defined(PORT_PIN_12) && defined(BIT_PIN_12)
_TEMPLATE_SET_RESET(12)
#endif
#if defined(PORT_PIN_13) && defined(BIT_PIN_13)
_TEMPLATE_SET_RESET(13)
#endif
#if defined(PORT_PIN_14) && defined(BIT_PIN_14)
_TEMPLATE_SET_RESET(14)
#endif
#if defined(PORT_PIN_15) && defined(BIT_PIN_15)
_TEMPLATE_SET_RESET(15)
#endif
#if defined(PORT_PIN_16) && defined(BIT_PIN_16)
_TEMPLATE_SET_RESET(16)
#endif
#if defined(PORT_PIN_17) && defined(BIT_PIN_17)
_TEMPLATE_SET_RESET(17)
#endif
#if defined(PORT_PIN_18) && defined(BIT_PIN_18)
_TEMPLATE_SET_RESET(18)
#endif
#if defined(PORT_PIN_19) && defined(BIT_PIN_19)
_TEMPLATE_SET_RESET(19)
#endif
#if defined(PORT_PIN_20) && defined(BIT_PIN_20)
_TEMPLATE_SET_RESET(20)
#endif
#if defined(PORT_PIN_21) && defined(BIT_PIN_21)
_TEMPLATE_SET_RESET(21)
#endif
#if defined(PORT_PIN_22) && defined(BIT_PIN_22)
_TEMPLATE_SET_RESET(22)
#endif
#if defined(PORT_PIN_23) && defined(BIT_PIN_23)
_TEMPLATE_SET_RESET(23)
#endif
#if defined(PORT_PIN_24) && defined(BIT_PIN_24)
_TEMPLATE_SET_RESET(24)
#endif
#if defined(PORT_PIN_25) && defined(BIT_PIN_25)
_TEMPLATE_SET_RESET(25)
#endif
#if defined(PORT_PIN_26) && defined(BIT_PIN_26)
_TEMPLATE_SET_RESET(26)
#endif
#if defined(PORT_PIN_27) && defined(BIT_PIN_27)
_TEMPLATE_SET_RESET(27)
#endif
#if defined(PORT_PIN_28) && defined(BIT_PIN_28)
_TEMPLATE_SET_RESET(28)
#endif
#if defined(PORT_PIN_29) && defined(BIT_PIN_29)
_TEMPLATE_SET_RESET(29)
#endif
#if defined(PORT_PIN_30) && defined(BIT_PIN_30)
_TEMPLATE_SET_RESET(30)
#endif
#if defined(PORT_PIN_31) && defined(BIT_PIN_31)
_TEMPLATE_SET_RESET(31)
#endif
#if defined(PORT_PIN_32) && defined(BIT_PIN_32)
_TEMPLATE_SET_RESET(32)
#endif
#if defined(PORT_PIN_33) && defined(BIT_PIN_33)
_TEMPLATE_SET_RESET(33)
#endif
#if defined(PORT_PIN_34) && defined(BIT_PIN_34)
_TEMPLATE_SET_RESET(34)
#endif
#if defined(PORT_PIN_35) && defined(BIT_PIN_35)
_TEMPLATE_SET_RESET(35)
#endif
#if defined(PORT_PIN_36) && defined(BIT_PIN_36)
_TEMPLATE_SET_RESET(36)
#endif
#if defined(PORT_PIN_37) && defined(BIT_PIN_37)
_TEMPLATE_SET_RESET(37)
#endif
#if defined(PORT_PIN_38) && defined(BIT_PIN_38)
_TEMPLATE_SET_RESET(38)
#endif
#if defined(PORT_PIN_39) && defined(BIT_PIN_39)
_TEMPLATE_SET_RESET(39)
#endif
#if defined(PORT_PIN_40) && defined(BIT_PIN_40)
_TEMPLATE_SET_RESET(40)
#endif
#if defined(PORT_PIN_41) && defined(BIT_PIN_41)
_TEMPLATE_SET_RESET(41)
#endif
#if defined(PORT_PIN_42) && defined(BIT_PIN_42)
_TEMPLATE_SET_RESET(42)
#endif
#if defined(PORT_PIN_43) && defined(BIT_PIN_43)
_TEMPLATE_SET_RESET(43)
#endif
#if defined(PORT_PIN_44) && defined(BIT_PIN_44)
_TEMPLATE_SET_RESET(44)
#endif
#if defined(PORT_PIN_45) && defined(BIT_PIN_45)
_TEMPLATE_SET_RESET(45)
#endif
#if defined(PORT_PIN_46) && defined(BIT_PIN_46)
_TEMPLATE_SET_RESET(46)
#endif
#if defined(PORT_PIN_47) && defined(BIT_PIN_47)
_TEMPLATE_SET_RESET(47)
#endif
#if defined(PORT_PIN_48) && defined(BIT_PIN_48)
_TEMPLATE_SET_RESET(48)
#endif
#if defined(PORT_PIN_49) && defined(BIT_PIN_49)
_TEMPLATE_SET_RESET(49)
#endif
#if defined(PORT_PIN_50) && defined(BIT_PIN_50)
_TEMPLATE_SET_RESET(50)
#endif
#if defined(PORT_PIN_51) && defined(BIT_PIN_51)
_TEMPLATE_SET_RESET(51)
#endif
#if defined(PORT_PIN_52) && defined(BIT_PIN_52)
_TEMPLATE_SET_RESET(52)
#endif
#if defined(PORT_PIN_53) && defined(BIT_PIN_53)
_TEMPLATE_SET_RESET(53)
#endif
#if defined(PORT_PIN_54) && defined(BIT_PIN_54)
_TEMPLATE_SET_RESET(54)
#endif
#if defined(PORT_PIN_55) && defined(BIT_PIN_55)
_TEMPLATE_SET_RESET(55)
#endif
#if defined(PORT_PIN_56) && defined(BIT_PIN_56)
_TEMPLATE_SET_RESET(56)
#endif
#if defined(PORT_PIN_57) && defined(BIT_PIN_57)
_TEMPLATE_SET_RESET(57)
#endif
#if defined(PORT_PIN_58) && defined(BIT_PIN_58)
_TEMPLATE_SET_RESET(58)
#endif
#if defined(PORT_PIN_59) && defined(BIT_PIN_59)
_TEMPLATE_SET_RESET(59)
#endif
#if defined(PORT_PIN_60) && defined(BIT_PIN_60)
_TEMPLATE_SET_RESET(60)
#endif
#if defined(PORT_PIN_61) && defined(BIT_PIN_61)
_TEMPLATE_SET_RESET(61)
#endif
#if defined(PORT_PIN_62) && defined(BIT_PIN_62)
_TEMPLATE_SET_RESET(62)
#endif
#if defined(PORT_PIN_63) && defined(BIT_PIN_63)
_TEMPLATE_SET_RESET(63)
#endif
#if defined(PORT_PIN_64) && defined(BIT_PIN_64)
_TEMPLATE_SET_RESET(64)
#endif
#if defined(PORT_PIN_65) && defined(BIT_PIN_65)
_TEMPLATE_SET_RESET(65)
#endif
#if defined(PORT_PIN_66) && defined(BIT_PIN_66)
_TEMPLATE_SET_RESET(66)
#endif
#if defined(PORT_PIN_67) && defined(BIT_PIN_67)
_TEMPLATE_SET_RESET(67)
#endif
#if defined(PORT_PIN_68) && defined(BIT_PIN_68)
_TEMPLATE_SET_RESET(68)
#endif
#if defined(PORT_PIN_69) && defined(BIT_PIN_69)
_TEMPLATE_SET_RESET(69)
#endif
#if defined(PORT_PIN_70) && defined(BIT_PIN_70)
_TEMPLATE_SET_RESET(70)
#endif
#if defined(PORT_PIN_71) && defined(BIT_PIN_71)
_TEMPLATE_SET_RESET(71)
#endif
#if defined(PORT_PIN_72) && defined(BIT_PIN_72)
_TEMPLATE_SET_RESET(72)
#endif
#if defined(PORT_PIN_73) && defined(BIT_PIN_73)
_TEMPLATE_SET_RESET(73)
#endif
#if defined(PORT_PIN_74) && defined(BIT_PIN_74)
_TEMPLATE_SET_RESET(74)
#endif
#if defined(PORT_PIN_75) && defined(BIT_PIN_75)
_TEMPLATE_SET_RESET(75)
#endif
#if defined(PORT_PIN_76) && defined(BIT_PIN_76)
_TEMPLATE_SET_RESET(76)
#endif
#if defined(PORT_PIN_77) && defined(BIT_PIN_77)
_TEMPLATE_SET_RESET(77)
#endif
#if defined(PORT_PIN_78) && defined(BIT_PIN_78)
_TEMPLATE_SET_RESET(78)
#endif
#if defined(PORT_PIN_79) && defined(BIT_PIN_79)
_TEMPLATE_SET_RESET(79)
#endif
#if defined(PORT_PIN_80) && defined(BIT_PIN_80)
_TEMPLATE_SET_RESET(80)
#endif
#if defined(PORT_PIN_81) && defined(BIT_PIN_81)
_TEMPLATE_SET_RESET(81)
#endif
#if defined(PORT_PIN_82) && defined(BIT_PIN_82)
_TEMPLATE_SET_RESET(82)
#endif
#if defined(PORT_PIN_83) && defined(BIT_PIN_83)
_TEMPLATE_SET_RESET(83)
#endif
#if defined(PORT_PIN_84) && defined(BIT_PIN_84)
_TEMPLATE_SET_RESET(84)
#endif
#if defined(PORT_PIN_85) && defined(BIT_PIN_85)
_TEMPLATE_SET_RESET(85)
#endif
#if defined(PORT_PIN_86) && defined(BIT_PIN_86)
_TEMPLATE_SET_RESET(86)
#endif
#if defined(PORT_PIN_87) && defined(BIT_PIN_87)
_TEMPLATE_SET_RESET(87)
#endif
#if defined(PORT_PIN_88) && defined(BIT_PIN_88)
_TEMPLATE_SET_RESET(88)
#endif
#if defined(PORT_PIN_89) && defined(BIT_PIN_89)
_TEMPLATE_SET_RESET(89)
#endif
#if defined(PORT_PIN_90) && defined(BIT_PIN_90)
_TEMPLATE_SET_RESET(90)
#endif
#if defined(PORT_PIN_91) && defined(BIT_PIN_91)
_TEMPLATE_SET_RESET(91)
#endif
#if defined(PORT_PIN_92) && defined(BIT_PIN_92)
_TEMPLATE_SET_RESET(92)
#endif
#if defined(PORT_PIN_93) && defined(BIT_PIN_93)
_TEMPLATE_SET_RESET(93)
#endif
#if defined(PORT_PIN_94) && defined(BIT_PIN_94)
_TEMPLATE_SET_RESET(94)
#endif
#if defined(PORT_PIN_95) && defined(BIT_PIN_95)
_TEMPLATE_SET_RESET(95)
#endif
#if defined(PORT_PIN_96) && defined(BIT_PIN_96)
_TEMPLATE_SET_RESET(96)
#endif
#if defined(PORT_PIN_97) && defined(BIT_PIN_97)
_TEMPLATE_SET_RESET(97)
#endif
#if defined(PORT_PIN_98) && defined(BIT_PIN_98)
_TEMPLATE_SET_RESET(98)
#endif
#if defined(PORT_PIN_99) && defined(BIT_PIN_99)
_TEMPLATE_SET_RESET(99)
#endif

#endif
