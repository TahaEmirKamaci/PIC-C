#include <main.h>
//Lcd öniþlemcileri
#define use_portb_lcd TRUE
#include <lcd.c>

int16 digital;
float sicaklik;
#INT_AD
void  AD_isr(void) 
{
   output_high(pin_C5);
   delay_ms(100);
   output_low(pin_C5);
   delay_ms(100);
}

void main()
{
   set_tris_b(0x00);
   set_tris_c(0x00);
   set_tris_e(0xFF);
   output_b(0x00);
   output_c(0x00);
   
   // Adc yapýlandýrma fonksiyonlarý
   setup_adc_ports(ALL_ANALOG);
   set_adc_channel(5);
   setup_adc(ADC_CLOCK_DIV_8);

   // ADc kesme fonksiyonlarý
   enable_interrupts(INT_AD);
   enable_interrupts(GLOBAL);

   lcd_init();
   printf(lcd_putc,"\SICAKLIK\nUYGULAMASI");
   delay_ms(1000);
   printf(lcd_putc,"\f");

   while(TRUE)
   {
      digital = read_adc();
      sicaklik = digital * (5.0/1024) * 10;
      printf(lcd_putc,"\fdigital = %lu \nsicaklik = %.1f%c",digital, sicaklik,223);
      delay_ms(1000);
   }

}
