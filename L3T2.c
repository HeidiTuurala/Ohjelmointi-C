/* 22.2.2024, Heidi Tuurala, L3T2.c, L3T2 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_nimen_pituus 50

void valikko(void);
void lisaaNimi(char tiedostonNimi[]);
void tulostaNimet(char tiedostonNimi[]);

int main (void){
    char tiedostonNimi[]="nimet.txt";
    int valinta;

    printf("Tämä ohjelma lisää nimiä tiedostoon ja lukee ne.\n");
    printf("Anna käsiteltävän tiedoston nimi: ");
    scanf("%s", tiedostonNimi);
        

    do {
        valikko();
        printf("\nAnna valintasi: ");
        scanf("%d", &valinta);

        if (valinta == 1) {
            lisaaNimi(tiedostonNimi);
        } else if (valinta == 2) {
            tulostaNimet(tiedostonNimi);
        } else if (valinta == 0) {
            printf("Kiitos ohjelman käytöstä.");
        } else {
            printf("Tuntematon valinta.");
        }

    } while (valinta != 0);

    return(0);
}

void valikko(void) {

    printf("Valitse alla olevista valinnoista");
    printf("\n1) Lisää uusi nimi");
    printf("\n2) Tulosta nimet");
    printf("\n0) Lopeta");

    return;
}

void lisaaNimi(char tiedostonNimi[]) {
    char nimi[MAX_nimen_pituus];
    FILE *tiedosto;

        tiedosto = fopen(tiedostonNimi, "a");

        printf("Anna lisättävä nimi: ");
        scanf("%s", nimi);

        fprintf(tiedosto, "%s\n", nimi);
        fclose(tiedosto);
        printf("Nimi lisätty tiedostoon.\n\n");

    return;
}

void tulostaNimet(char tiedostonNimi[]) {
    char nimi[MAX_nimen_pituus];
    FILE *tiedosto;

    if (strcmp(tiedostonNimi, "nimet.txt") != 0) {
        perror("Tiedoston avaaminen epäonnistui, lopetetaan: no such file or directory\n");
        exit(0);
    } else {
        tiedosto = fopen(tiedostonNimi, "r");
        printf("Tiedostossa olevat nimet:\n");

        while (fgets(nimi, MAX_nimen_pituus, tiedosto) != NULL) {
            printf("%s", nimi);
        }
    }

        fclose(tiedosto);
        printf("Tiedosto luettu ja tulostettu.\n\n");
        return;
}