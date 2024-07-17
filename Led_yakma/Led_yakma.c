#include "18f452.h"
#fuses XT,NOWDT,NOPROTECT,PUT
#use delay (clock=4000000)
#use fast_io(b)

void main (void)
{
   set_tris_b(0x00); //b portu çýkýþ yapldý
   while(1){
      output_toggle(pin_b1);
      delay_ms(1000);
   }
   
}
