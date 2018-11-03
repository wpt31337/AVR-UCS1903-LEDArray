# AVR-UCS1903-LEDArray
Arduino Library to Control UCS1903 LED Arrays using a Standard Digital Pin

This stand alone library was design to control one or more LED Arrays that use the UCS1903 chipset while mimizing the potential for compatability issues with external shields or SPI-based add ons. 

The code was compiled with Arduino version 1.8.7 and tested on a 16MHz Arduino Uno and 16MHz Arduino Mega. It should theoretically work with a 8MHz chip since the UCS1903 supports a slow mode which is twice the timing delay. 

It is definately in the realm of possibility (i.e. inevitable) that another version of of the Arduino IDE will use a newer gcc version or different build flags that will result in different byte code at the critical looping phase. If that happens, it is still possible to inspect the byte code and monkey with the cycle delay defines, but if it comes that point you'll be better off with a o-scope and probe (or a better library)!
