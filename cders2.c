#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*
        k=1den n e kadar (k*k +1.23) / (k- 0.25)
    */

   float p, r;
   int n, k; 

   printf("n degerini giriniz\n");
   scanf("%d", &n);

   for(k = 1, r=0; k <= n;k++)
   {
        p = (k*k + 1.23)/(k-0.25);
        p += r;
        r = p;
   }

   printf("\n%f",r);

}