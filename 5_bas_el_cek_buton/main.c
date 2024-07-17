#include <main.h>

void main()
{
   set_tris_b(0x00);
   set_tris_a(0xff);
   
   int sayac;
   output_b(0x00);
   
   while(TRUE)
   {
      for(sayac == 0; sayac < 5; sayac++) {
         while(input(pin_A1) == 0); // basılana kadar bekle
         delay_ms(20);
         while(input(pin_A1) == 1); // el çekilene kadar bekle
         delay_ms(20);
      }
      output_high(pin_B4);
   }

}
