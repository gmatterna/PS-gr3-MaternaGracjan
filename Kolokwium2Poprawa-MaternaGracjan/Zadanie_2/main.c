#include <stdio.h>
#include <stdlib.h>


int ilemini(const short tab[], int n)
{
    int min = tab[0];
    int ilerazy = 0;

    for(int i = 1; i<n; i++)
        if(min>tab[i])
                min = tab[i];
                ilerazy++;
                printf("Wystapienia: %d\n", ilerazy);




    return min;
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

    short a = 400;
    srand(time(0));
    for(short *p = tab; p < tab + n; ++p)
    {
        *p = rand() % a + (-250);
    }

    for(short *p = tab; p < tab + n; ++p)
    {
        printf("%d, ", *p);
    }
    printf("\n");
    printf("\n");

    printf("Najmniejsza liczba: %d", ilemini(tab, n));






   return 0;

}
