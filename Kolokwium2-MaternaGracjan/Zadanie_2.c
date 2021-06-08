#include <stdio.h>
#include <stdlib.h>


void podmien(char *n)
{
    int i;
    for(i = 0; n[i]!=0; i++)
        if((n[i]>='a')&&(n[i]<='z'))
            n[i]-=('a'-'A');


}

int main()
{
    char n[] = "costaM";

    podmien(n);

    printf("%s", n);



}
