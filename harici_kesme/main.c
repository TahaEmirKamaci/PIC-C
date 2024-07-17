#include <main.h>

#INT_EXT
void  EXT_isr(void) 
{
   int sayac;
   
   for(sayac = 0; sayac < 5; sayac++) {
      output_high(pin_d0);
      delay_ms(500);
      output_low(pin_d0);
      delay_ms(500);
   }
}

void main()
{

   enable_interrupts(INT_EXT);
   enable_interrupts(GLOBAL);
   ext_int_edge(0, H_TO_L); // el çekildikten sonra

   set_tris_b(0xFF);
   set_tris_d(0x00);
   
   output_d(0x00);
   
   while(TRUE)
   {
      output_high(pin_d0);
   }

}
