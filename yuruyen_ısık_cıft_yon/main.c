#include <main.h>

void main()
{
   set_tris_b(0x00);
   output_b(0x00);
   int z=0b00000001;
   while(1){
   s1:
   output_b(z);
   delay_ms(500);
   z=z<<1;
   
   if(z==0b10000000){
      output_b(z);
      while(1){
        delay_ms(500);
        z=z>>1;
        output_b(z);
        delay_ms(500);
        if(z==0b00000001){
            output_b(z);
            goto s1;
        }
      }
     }
   }
}
