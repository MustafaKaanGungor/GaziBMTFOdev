#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Askeri Liselere öğrenci kabülünde, adayın yaşının 13-17 araında olması ve vücut kitle indeksinin 18,50 - 24,99
    arasında olması istenmektedir. Adayın kabul durumunu yazdırınız.
    
    VKİ = kg / boy^2 
    */

   int adayYas, adayKilo, vucutKitleI;
   float adayBoy;

   printf("Askeri Lise aday uygunluk kontrol programina hosgeldiniz \nLutfen yasinizi yaziniz ");
   scanf("%d", &adayYas);

   printf("Kilonuzu giriniz.");
   scanf("%d", &adayKilo);

   printf("Boyunuzu metre turunden giriniz.");
   scanf("%f", &adayBoy);

   vucutKitleI = adayKilo / (adayBoy * adayBoy);

   if(adayYas <= 17 && adayYas >= 13 && vucutKitleI >= 18.50 && vucutKitleI <= 24.99)
   {
    printf("Askeri Liseye girmek için gerekli kriterleri karşılıyorsunuz. Kabul edildiniz.");
   }
   else
   {
    printf("Askeri Liseye girmek icin gerekli kriterleri karsilamiyorsunuz. Basvurunuz reddedildi.");
   }
}