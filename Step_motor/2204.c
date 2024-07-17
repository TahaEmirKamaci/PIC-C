#include <2204.h>

int sayac;

int smotor[8] = {0x01, 0x03, 0x02, 0x06, 0x04, 0x0C, 0x08, 0x09};


void main()
{
   set_tris_a(0xff);
   set_tris_c(0x00);
   
   output_c(0x00);
   while(TRUE)
   {
      for(sayac = 0; sayac<8; sayac++) {
         output_c(smotor[sayac]);
         delay_ms(500);
      }
   }

}
