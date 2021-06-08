#include <stdio.h>
#include <stdlib.h>


struct Produkt
{
    char*nazwa;
    double cenaBrutto;
    float stawkaVAT;

};

typedef struct Produkt pt;


pt makeProdukt(const char* nazwa, double cenaBrutto, float stawkaVAT)
{
    printf("podai nazwe: ");
    scanf("%s", &nazwa);

    printf("podai cene brutto: ");
    scanf("%lf",&cenaBrutto);

    printf("podai stawke vat: ");
    scanf("%f", &stawkaVAT);



}


pt makeProdukt2(const pt *pt);
{
    printf("podai nazwe: ");
    scanf("%s", &pt -> nazwa);

    printf("podai cene brutto: ");
    scanf("%lf", &pt -> cenaBrutto);

    printf("podai stawke vat: ");
    scanf("%f", &pt -> stawkaVAT);



}

double cenaNetto(const pt *pt);
{
   double cenaNetto = cenaBrutto / stawkaVAT;
}

double kwotaVAT(const pt *pt);
{
    double kwotaVAT = cenaBrutto - cenaNetto;
}

void show(const pt *pt);
{
    struct Produkt p1;
    struct Produkt p2;
    printf("%s\n", &p1.nazwa, &p1.cenaBrutto, &p1.stawkaVAT);

    printf("%s\n", &p2.nazwa, &p2.cenaBrutto, &p2.stawkaVAT);


}





int main()
{
    printf("Hello world!\n");
    return 0;
}
