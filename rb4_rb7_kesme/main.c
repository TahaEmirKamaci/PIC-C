#include <main.h>

#INT_RB
void  RB_isr(void) 
{
   output_c(0x00);
   if(input(pin_B4)){
      output_high(pin_C4);
      delay_ms(5000);
      output_low(pin_C4);
   }
   if(input(pin_B5)){
      output_high(pin_C5);
      delay_ms(5000);
      output_low(pin_C5);
   }
   if(input(pin_B6)){
      output_high(pin_C6);
      delay_ms(5000);
      output_low(pin_C6);
   }
   if(input(pin_B7)){
      output_high(pin_C7);
      delay_ms(5000);
      output_low(pin_C7);
   }
}
// düþen kenar, yükselen kenar olayý harici kesmede var sadece
void main()
{

   enable_interrupts(INT_RB);
   enable_interrupts(GLOBAL);
   
   set_tris_b(0xFF);
   set_tris_c(0x00);
   
   output_c(0x00);

   while(TRUE)
   {
      output_c(0xff);
      delay_ms(1000);
      output_c(0x00);
      delay_ms(1000);
   }

}
