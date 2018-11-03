# AVR-UCS1903-LEDArray
Arduino Library to Control UCS1903 LED Arrays using a Standard Digital Pin

This stand alone library was design to control one or more LED Arrays that use the UCS1903 chipset while mimizing the potential for compatability issues with external shields or SPI-based add ons. 

The code was compiled with Arduino version 1.8.7 and tested on a 16MHz Arduino Uno and 16MHz Arduino Mega. It should theoretically work with a 8MHz chip since the UCS1903 supports a slow mode which is twice the timing delay. 

It is definately in the realm of possibility (i.e. inevitable) that eventually another version of of the Arduino IDE will use a newer gcc version or different build flags that will result in different byte code at the critical looping phase. If that happens, it is still possible to inspect the byte code and monkey with the cycle delay defines, but if it comes that point you'll be better off with a o-scope and probe (or a better library)!

Pin defines are required for boards other than the Uno or Mega. See the header file and notes on adding those for other boards. If you add a new board and it works send me the pin values you used and i'll add them. 

The default is for the code to block interupts when sending data on the digital pin. If that messes up other code that needs interrupts enable at all times, then you can disable that behavior with #define NO_INTERRUPTS. That will likely cause issues with the LED arrays that show up as periodic colors pops but atleast it wont mess with your other code.

See the examples for usage. Its pretty simple stuff. Add the folder to your Arduino libraries folder and you're off and running. Hope this helps someone - was fun to play around with.
