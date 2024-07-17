#include <16F84A.h>

#FUSES NOWDT                 	//No Watch Dog Timer

#use delay(crystal=4000000)
#use FIXED_IO( B_outputs=PIN_B7,PIN_B6,PIN_B5,PIN_B4,PIN_B3,PIN_B2,PIN_B1,PIN_B0 )

