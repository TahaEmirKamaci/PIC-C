#include <iki_dugme.h>

void main()
{
   set_tris_a(0xff);
   set_tris_b(0x00000000);
  
   output_b(0x00);
  while(1){
   if(input(pin_A1)==1){
      output_high(pin_B4);
   }
   else{
      if(input(pin_A2)==1){   
         output_low(pin_B4);      
   }
   }
  } 
   
}
