#include <main.h>

int i;
void main()
{
   while(TRUE)
   {
      set_tris_b(0x00);
      output_b(0x00);
   
      //Yatay k�rm�z� dikey ye�il
      output_b(0b00100001);  //YKB0 ve DYB5
      delay_ms(3000);        // 3 sn
   
      for(i = 1; i<= 3; i++) {
         output_b(0b00010001); // YKB0 ve DYB4
         delay_ms(1000);
         output_b(0b00000001); // YKBO ve DYB4
         delay_ms(1000);
      }
      
      output_b(0b00001001);   // YKB0 ve DYB4
      delay_ms(1000);
      output_b(0b00001010);  // YKB0 ve DYB4
      delay_ms(1000);
      output_b(0b00001100);  // YKB0 ve DYB4
      delay_ms(3000);
      
      for(i = 1; i<= 3; i++) {
         output_b(0b0001010); // YKB0 ve DYB4
         delay_ms(1000);
         output_b(0b00001000); // YKBO ve DYB4
         delay_ms(1000);
      }
      
      output_b(0b00001001); // YKB0 ve DYB4
      delay_ms(1000);
      output_b(0b00010001); // YKB0 ve DYB4
      delay_ms(1000);
      output_b(0b00100001); // YKB0 ve DYB4
      delay_ms(3000);
   }
   
   
      
   

}
