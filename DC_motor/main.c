#include <main.h>

void main()
{

   set_tris_a(0xff);
   
   set_tris_b(0x00);
   output_b(0x00);
   
   while(TRUE)
   {
      if(input(pin_A0)==1){
         delay_ms(20);
         while(input(pin_A0)==1);
         delay_ms(20);
         output_b(0b00000101);   //A motorunu bir yönünde çalýþtýrdýk
      }
      
      if(input(pin_A2)==1){
         delay_ms(20);
         while(input(pin_A2)==1);
         delay_ms(20);
         output_b(0b00000000);   //A motorunu bir yönünde çalýþtýrdýk
      }
   }

}
