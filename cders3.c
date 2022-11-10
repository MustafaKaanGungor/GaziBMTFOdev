#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*
    #

    ##

    ###
    */

   int satirSayi, sayac, icSayac;

   printf("Satir sayisinin giriniz ");
   scanf("%d",&satirSayi);

   for(sayac = 0; sayac < satirSayi; sayac++)
   {
    for(icSayac = 0; icSayac <= sayac;icSayac++)
    {
        printf("#");
    }
    printf("\n\n");
   }
}