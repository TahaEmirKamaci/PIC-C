#include <main.h>
int sayac;
#INT_TIMER1
void  TIMER1_isr(void) 
{
   sayac=sayac+1;
   if(sayac==2){
      for(int i=0;i<5;i++){
         output_b(0xFF);
         delay_ms(100);
         output_b(0x00);
         delay_ms(100);
      }
      sayac=0;
   }
   set_timer1(3036);
   
}

void main()
{
   sayac=0;
   set_tris_b(0x00);
   output_b(0x00);
   
   
   setup_timer_1(T1_INTERNAL|T1_DIV_BY_8);      //524 ms overflow
   set_timer1(3036);

   enable_interrupts(INT_TIMER1);
   enable_interrupts(GLOBAL);

   while(TRUE)
   {
      //TODO: User Code
   }

}
