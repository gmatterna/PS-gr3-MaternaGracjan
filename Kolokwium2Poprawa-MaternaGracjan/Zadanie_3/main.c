#include <stdio.h>
#include <stdlib.h>


#define MAX_LEN 50

typedef struct Osoba{
    char *nazwisko;
    char* imie;
    long long pesel;
    float pensja;
}Osoba;

Osoba makeOsoba(char* nazwisko, char* imie, long long pesel, float pensja)
{
    Osoba a;
    a.nazwisko=(char*)malloc(MAX_LEN * sizeof(char));
    for(int i =0; i < MAX_LEN; i++)
        a.nazwisko[i] = nazwisko[i];

    a.imie=(char*)malloc(MAX_LEN * sizeof(char));
    for(int i =0 ; i < MAX_LEN; i++)
        a.imie[i] = imie[i];

    a.pesel = pesel;
    a.pensja = pensja;

    return a;



}

Osoba makeOsoba2(const Osoba *osoba)
{
    Osoba a;
    a.nazwisko=(char*)malloc(MAX_LEN * sizeof(char));
    for(int i =0; i < MAX_LEN; i++)
     a.nazwisko[i] = osoba->nazwisko[i];

    a.imie=(char*)malloc(MAX_LEN * sizeof(char));
    for(int i =0 ; i < MAX_LEN; i++)
        a.imie[i] = osoba->imie[i];

    a.pesel = osoba->pesel;
    a.pensja = osoba->pensja;

    return a;


}


void show(const Osoba *osoba)
{
    printf("Nazwisko: %s\n Imie: %s\n Pesel: %lld\n Pensja: %f\n",osoba->nazwisko,osoba->imie,osoba->pesel, osoba->pensja);
}

void destroy(Osoba* osoba)
{
    free(osoba->nazwisko);
    osoba->nazwisko = NULL;

    free(osoba->imie);
    osoba->imie = NULL;


    free(osoba->pesel);
    osoba->pesel = NULL;



}

int main()
{
    Osoba a = makeOsoba("Materna", "Gracjan", 6465898, 120.60);
    show(&a);
    Osoba b = makeOsoba2(&a);
    show(&b);
    destroy(&a);
    destroy(&b);
    show(&a);
    show(&b);

}
