#include <main.h>
#define use_portd_lcd TRUE
#include <lcd.c>

int16 zaman;
float x;
void main()
{
   set_tris_d(0x00);
   output_d(0x00);
   
   setup_timer_1(T1_INTERNAL|T1_DIV_BY_1);      //65,5 ms overflow

   lcd_init();
   
   while(TRUE)
   {
      //Trigger yapma
      output_high(pin_B0);
      delay_us(15);
      output_low(pin_B0);
      
      while(input(pin_B4) == 0); //dinle
      set_timer1(0);
      while(input(pin_B4) == 1);
      zaman = get_timer1();
      x = ((0.00034) * zaman)/2;  // sesin mikrosaniyedeki h�z� = 0.00034
      printf(lcd_putc,"\f Mesafe = %.2f m", x);
      delay_ms(500);
      
   }

}
