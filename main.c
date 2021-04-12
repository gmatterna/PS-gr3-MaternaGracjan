#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int dziel(int n)
{

    for(int k = n-1; k>=0; k--)
    {

        if(n%k==0)
        {
            return k;

        }
    }
    return 0;
}

int pierwiastek(int n)
{
    for(int i = 0; i<n; i++)
    {
        if(i*i==n)
            return (int)i;
    }


    return 0;


}

int pierw(int x)
{


    float sqrt = x / 2;
    float temp = 0;
          while(sqrt != temp)
    {
       temp = sqrt;
       printf("temp %f =\n", temp);
       sqrt = ( x/temp + temp) / 2;
       printf("sqrt = %f\n", sqrt);
    }
    return (int)sqrt;


}


int sumapierwiastek(int n)
{
    int suma = 0;
    for(int i = 0; i<=n ; i++)
    {


        suma+=(int)sqrt(i);
    }


return suma;
}


int zad12(int n, int m)
{
    int suma = 0;

    for(int i =0;i<=n;i++)
    {
        for(int j =0;j<=m;j++)
            printf("%d", pow(n, sqrt(m)));
        suma = suma + i;

    }
    printf("suma wynosi: %d\n", suma);
}

unsigned long long zad_21_rek(int n)
{
    if(n==0)
        return 1;
    return 2 * zad_21_rek(n-1) + 5;
}

unsigned long long zad_21_ite(int n)
{
    unsigned long long a=1;
    for (int i =0;i<n;i++)
    {
        unsigned long long new_a = 2*a+5;
        a = new_a;
    }
    return a;
}

unsigned long long zad_22_rek(int n)
{
    if(n==1)
        return 1;
    return zad_22_rek(n-1) + 2 * zad_22_rek(n-2) + 3;
}

unsigned long long zad_22_ite(int n)
{
    unsigned long long a0 = 1, a1 = 1;
    for(int i =0;i<n;i++)
    {
        unsigned long long aa = a0 + 2*a0 + 3;
        a0 = a1 = aa;

    }
    return a0 = a1;
}


void generuj(short tab[], int n, short lim)
{
    srand(time(0));
    for(int j =0; j<n; ++j)
        {
            tab[j] = rand() % lim + 1;
        }
    }
}

void odwroc(short tab[], int lewy, int prawy)
{




}


int main()
{
    int N = 1000;
    short tab[N];
    int n;
    printf("podaj n: ");
    scanf("%d",&n);

    if(0>lewy|| lewy > n)
    {
        printf("lewy powinien byc z przedzialu[0,%d\n]!", n);
        return 1;
    }


    if(0>prawy || prawy > n)
    {
        printf("prawy powinien byc z przedzialu[0,%d\n]!", n);
        return 1;
    }

    int j = prawy;
    for(int i = lewy; i <=(prawy+lewy)/2; i++)
    {

        int temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
        j--;
    }

    printf("[ ");
    for(int i = 0; i<n; i++)
    {
        printf("%d, ", tab[i]);
    }
    printf("]");
    return 0;

}

