#include <main.h>

int sayi[3] = {0b10110011, 0b11010000, 0b11100111};

int sayac;
void main()
{
   
   set_tris_c(0x00);
   output_c(0x00);
   
   
   while(TRUE)
   {
      for(sayac = 0; sayac < 3; sayac++) {
         output_c(sayi[sayi]);
         delay_ms(100);
      }
   }

}
