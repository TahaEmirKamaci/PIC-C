#include <18F452.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES WDT128                   //Watch Dog Timer uses 1:128 Postscale
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=4000000)
#use FIXED_IO( C_outputs=PIN_C7,PIN_C6,PIN_C5,PIN_C4,PIN_C3,PIN_C2,PIN_C1,PIN_C0 )
#use fast_io(a)

