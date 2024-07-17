#include <main.h>

#INT_TIMER1
void  TIMER1_isr(void) 
{
   
   for(int i = 0; i<5; i++){
      output_b(0xff);
      delay_ms(100);
      output_b(0x00);
      delay_ms(100);
   }
   set_timer1(65534);
}

void main()
{
   set_tris_b(0x00);
  
   
   setup_timer_1(T1_EXTERNAL|T1_DIV_BY_1);      //65,5 ms overflow

   set_timer1(65534);

   enable_interrupts(INT_TIMER1);
   enable_interrupts(GLOBAL);

   while(TRUE)
   {
      //TODO: User Code
   }

}
