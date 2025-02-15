#include <main.h>

int dutyCycle = 4;
void main()
{
   setup_timer_2(T2_DIV_BY_16,124,1);      //2,0 ms overflow, 2,0 ms interrupt

   setup_ccp2(CCP_PWM);
   set_pwm2_duty((int16)0);

   while(TRUE)
   {
      if(input(pin_A0) == 1)
      {
         delay_ms(20);
         while(input(pin_A0) == 1);
         delay_ms(20);
         dutyCycle = dutyCycle + 10;
         
         if(dutyCycle > 124)
            dutyCycle = 124;
           
         set_pwm2_duty(dutyCycle);
      }
      
      if(input(pin_A1) == 1)
      {
         delay_ms(20);
         while(input(pin_A1) == 1);
         delay_ms(20);
         dutyCycle = dutyCycle - 10;
         
         if(dutyCycle < 4)
            dutyCycle = 4;
           
         set_pwm2_duty(dutyCycle);
      }
   }

}
