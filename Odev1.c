#include <stdio.h>
#include <stdlib.h> 

int main()
{
    /*
    Lisansüstü eğitim almak için başvuran adayın ALES puanı, yabancı dil puanı ve 
    mezuniyet ortalamasına göre sıralama puanı hesapladıktan sonra sıralamaya girip
    girmiyeceğini ekrana yazan C uygulamasını kodlayınız

    PUAN = Ales'in %50si + yabancı dilin %25i + AGNOnun %25i
    60 üzeri puan sıralamaya girebilir.
    */

   int alesPuan, yabanciDilPuan, mezuniyetOrt;

   float siralamaPuan;

   printf("ALES puaninizi giriniz.");
   scanf("%d",&alesPuan);

   printf("Yabanci dil puaninizi giriniz.");
   scanf("%d", &yabanciDilPuan);

   printf("Mezuniyet ortalamanizi giriniz.");
   scanf("%d", &mezuniyetOrt);

siralamaPuan = alesPuan/2 + yabanciDilPuan/4 + mezuniyetOrt/4;

if(siralamaPuan > 60)
{
    printf("Siralamaya girebilirsiniz.");
}
else
{
    printf("Siralamaya giremezsiniz. Puaniniz yeterli degil.");
}

return 0;
}