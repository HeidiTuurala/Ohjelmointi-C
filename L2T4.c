/* 20.2.2024, Heidi Tuurala, L2T4.c, L2T4 */
#include <stdio.h>

int main (void) {
    float pii = 3.142;
    float luku;
    int valinta;

    printf("Anna liukuluku: \n");
    scanf("%f", &luku);

    printf("Valikko\n");
    printf("1) Kerro piin arvo luvulla %.3f.\n", luku);
    printf("2) Jaa piin arvo luvulla %.3f.\n", luku);
    printf("Valitse: \n");
    scanf("%d", &valinta);

    float kertolasku = pii*luku;
    float jakolasku = pii/luku;

    switch (valinta) {
        case 1:
            printf("Pii * %5.3f = %.3f.\n", luku, kertolasku);
            break;
        case 2:
            printf("Pii / %5.3f = %.3f.\n", luku, jakolasku);
            break;
        default:
            printf("Tuntematon valinta.\n");
            break;
    }

    return(0);
}