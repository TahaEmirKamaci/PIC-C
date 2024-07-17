#include <18f452.h> // Mikrodenetleyici tan�mlama dosyas�n� ekliyoruz
#use delay(crystal=20000000) // Kristal osilat�r frekans�n� giriyoruz

void main(){ 
   set_tris_a(0x11111111);
   set_tris_b(0b00000000);
 while(TRUE){
  if(INPUT(pin_A0) == TRUE){ // e�er a0 pini +5V ise
   output_high(pin_B0); // b0 pinini +5V yap
  }else{
   output_low(pin_B0);// b0 pinini 0V yap
  }
 }
}
