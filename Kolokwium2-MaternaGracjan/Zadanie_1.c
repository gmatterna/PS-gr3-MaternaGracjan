#include <stdio.h>
#include <stdlib.h>


void odwroc(short tab[], int lewy, int prawy)
{

    int n;


    short *j = tab + prawy;

    for(short *p = tab+lewy; p< tab + lewy + (prawy-lewy+1)/2; p++)
    {
        short tmp = *p;
        *p = *j;
        *j = tmp;
        *j--;

    }

    printf("\n");

    for(short *p = tab; p < tab + n; ++p)
    {

        printf("%5d, ", *p);
    }




}




int main()
{
    const int N = 500;
    short tab[N];
    int n;
    printf("Podaj liczbe: ");
    scanf("%d", &n);

    if (n<=0 || n > N)
    {
        printf("liczba musi byc z przedzialu [1, 500]");
        return -1;
    }

    short a = 300;
    srand(time(0));
    for(short *p = tab; p < tab + n; ++p)
    {
        *p = rand() % a + (-200);
    }

    for(short *p = tab; p < tab + n; ++p)
    {
        printf("%d, ", *p);
    }
    printf("\n");
    printf("\n");

   int lewy;
   printf("podaj lewy: ");
   scanf("%d", &lewy);

   int prawy;
   printf("podaj prawy: ");
   scanf("%d",&prawy);



   if(0>lewy || lewy > n)
   {
       return 1;
   }


   if (0>prawy || prawy>n)
   {
       return 1;
   }

   odwroc(tab,lewy,prawy);

   for(short *p = tab; p < tab + n; ++p)
   {
       printf("%5d ", *p);
   }





   return 0;

}

