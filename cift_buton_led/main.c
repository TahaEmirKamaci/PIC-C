#include <main.h>

void main()
{
   set_tris_b(0x00);
   set_tris_a(0xff);
   output_b(0x00);
   
   while(TRUE) {
      if(input(pin_A2) == 1){
         output_low(pin_B4);  
      }
   
      if(input(pin_A1) == 1) {
         output_high(pin_B4);   
      }
      
      
      while(input(pin_A1) == 1);
      while(input(pin_A1) == 0);
      output_high(pin_B4);
   }
   
   
   
         

}
