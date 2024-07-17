#include <main.h>

int sayac = 0;
void main()
{
   
   set_tris_a(0xFF);
   set_tris_b(0x00);
   
   output_b(0x00);
 

   while(TRUE)
   {
      bas: output_b(0b00000101);
      if(input(pin_A0) == 1) {
         delay_ms(20);
         while(input(pin_A0) == 1); // el çekilene kadar bekle
         sayac++;
         
         output_b(0b00000101);
         
         if(sayac == 10){
            delay_ms(100);
            //output_b(0x00); gerekli deðil
            
            while(sayac > 0) {
               output_b(0b00011000);
               if(input(pin_A1) == 1) {
                  
                  delay_ms(20);
                  while(input(pin_A1) == 1);
                  delay_ms(20);
                  //output_b(0x00); gerekli deðil
                  sayac = 0;
                  delay_ms(200);
                  goto bas;
               }
                             
            }
         }
                     
      }
      
       
   }

}
