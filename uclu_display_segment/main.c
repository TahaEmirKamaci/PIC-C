#include <main.h>

int16 arr_y[10]= {0b0010000, 0b00010001, 0b00010010, 0b00010011, 0b00010100, 0b00010101, 0b00010110, 0b00010111, 0b00011000, 0b00011001};

int16 arr_o[10] = {0b0000, 0b00100001, 0b00100010, 0b00100011, 0b00100100, 0b00100101, 0b00100110, 0b00100111, 0b00101000, 0b00101001};

int16 arr_b[10] = {0b01000000, 0b01000001, 0b01000010, 0b01000011, 0b01000100, 0b01000101, 0b01000110, 0b01000111, 0b01001000, 0b01001001};

int16 birler, onlar, yuzler,zaman;
//int arr_a[3] = {0b00010011, 0b00100000, 0b01000111};

int sayac = 0;

void main()
{
   set_tris_a(0xFF);
   set_tris_c(0x00);
   
   output_c(0x00);
   
   while(sayac < 1000)
   {  
      /*for(sayac = 0; sayac < 3; sayac++) {   
         output_c(arr_a[sayac]);
         delay_ms(10); }*/
         
     birler = sayac % 10; //birler basama��
     onlar = (sayac % 100 - birler) / 10;
     yuzler = sayac / 100;
     
     for (zaman = 0; zaman < 25; zaman++) {
      delay_ms(13);  
      output_c(arr_b[birler]);
      delay_ms(13);
      output_c(arr_o[onlar]);
      delay_ms(13);
      output_c(arr_y[yuzler]);
      
     }
     sayac++;
      
      
   }

}
