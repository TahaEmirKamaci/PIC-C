#include <16F877A.h>
#device ADC=16

#FUSES NOWDT                 	//No Watch Dog Timer
#FUSES NOBROWNOUT            	//No brownout reset
#FUSES NOLVP                 	//No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=4000000)
#use FIXED_IO( B_outputs=PIN_B0 )
#use FIXED_IO( D_outputs=PIN_D7,PIN_D6,PIN_D5,PIN_D4,PIN_D3,PIN_D2,PIN_D1,PIN_D0 )

