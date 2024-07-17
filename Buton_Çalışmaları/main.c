#include <main.h>

void main()
{
   set_tris_a(0xff);
   set_tris_b(0x00000000);
  
   output_b(0x00);
  
   while(input(pin_A1)==0);
   output_high(pin_B4);
   
   
}
