
int sayac  = 0;


int smotor[8] = {0x01, 0x03, 0x02, 0x06, 0x04, 0x0C, 0x08, 0x09};

void main() {

   set_tris_a(0xff);
   set_tris_c(0x00);
   
   output_c(0x00);
   
   
   while(TRUE) {
      
      if(input(pin_A1) == 1) {
         ileri: 
         output_c(smotor[sayac]);
         if(input(pin_A1) == 1)
            goto geri;
         delay_ms(150);
         sayac++;
         if(sayac == 7)
            sayac = 0;
         goto ileri;
      }
      
      if(input(pin_A1) == 1) {
         geri:
         output_c(smotor[sayac]);
         if(input(pin_A0) == 1)
            goto ileri;
         delay_ms(150);
         sayac--;
         if(sayac == 0)
            sayac = 7;
         goto geri;
      }
   
   }
   


}
