#include <main.h>
int i;
void main()
{
   set_tris_a(0xFF);
   set_tris_b(0x00);
   set_tris_d(0x00);
   
   output_c(0x00);
   output_d(0x00);

   while(TRUE)
   {
      if(input(pin_A0) == 1) {
         while(input(pin_A0) == 1);
         delay_ms(20);
         output_high(pin_B3);
         delay_ms(2000);
         output_low(pin_B3);
         
         for(i = 0; i< 3; i++) {
            output_b(0x05);
            delay_ms(3000);
         
            output_b(0x06);
            delay_ms(3000);
            
            output_b(0x00);
            delay_ms(500);
         }
         
         output_high(pin_B4);
         delay_ms(2000);
         output_low(pin_B4);
         
      }
      
   }

}
