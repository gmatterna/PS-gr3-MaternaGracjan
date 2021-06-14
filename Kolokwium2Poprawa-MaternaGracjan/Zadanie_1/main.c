#include <stdio.h>
#include <stdlib.h>



void kopiuj(char* tab1, char* tab2, int n)
{

    size_t a = sizeof(tab1)/sizeof(char);

    for (int i = tab1[0]; i<=n;i++)
    {
        tab1[i] = tab2;

    }


}



int main()
{



    char tab1[] = "abc";


    size_t a = sizeof(tab1)/sizeof(char);

    int n;
    printf("podaj ile liter ma zostac przekopiowane: ");
    scanf("%d", &n);
    if(n>a)
        printf("za duza liczba!");
    return -1;

    char tab2[n+1];


    kopiuj(tab1,tab2,n);

    printf("%s", tab2);




    return 0;
}
