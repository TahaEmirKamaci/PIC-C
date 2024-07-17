#include <main.h>
#define usb_portb_lcd TRUE
#include <lcd.c>
int16 digital;
float lux,V0;
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
   set_tris_c (0x00);
   set_tris_e(0xFF);
   output_b(0x00);
   output_c(0x00);
   setup_adc_ports(ALL_ANALOG);
   setup_adc(ADC_CLOCK_DIV_8);
   set_adc_channel(5);
   setup_adc_ports(ALL_ANALOG);
   enable_interrupts(INT_AD);
   enable_interrupts(GLOBAL);
   lcd_init();
   printf(lcd_putc,"\f ISIK SIDDETÝ \n UYGULAMASI");
   delay_ms(100);
   printf(lcd_putc,"\f");
   while(TRUE)
   {
      digital=read_adc();
      V0=digital*(5.0/1024);
      lux=(2500.0/V0-500)/3.3;
      printf(lcd_putc,"\f LUX-%0.1f",lux);
      delay_ms(100);
   }
}
