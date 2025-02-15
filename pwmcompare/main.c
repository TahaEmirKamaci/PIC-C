#include <main.h>

#INT_CCP1
void  CCP1_isr(void) 
{
   output_toggle(pin_B0);
}

void main()
{
   set_tris_b(0x00);
   output_b(0x00);
   setup_timer_1(T1_EXTERNAL|T1_DIV_BY_1);      //65,5 ms overflow

   setup_ccp1(CCP_COMPARE_RESET_TIMER);

   enable_interrupts(INT_CCP1);
   enable_interrupts(GLOBAL);

   set_timer1(0);
   
   CCP_1_HIGH = 0x00; // CCPR1 kaydedicisi s�f�rlan�yor.
   CCP_1_LOW  = 0x05; //CCPR1 kaydedicisine 05h de��eri atan�yor.
   
   while(TRUE)
   {
      //TODO: User Code
   }

}
