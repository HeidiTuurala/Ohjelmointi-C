/* 17.2.2024, Heidi Tuurala, L2T1.c, L2T1 */
#include <stdio.h>

int main(void){
    int kokonaisluku1;
    int kokonaisluku2;
    int valinta;

    printf("Anna kaksi kokonaislukua: ");
    scanf("%d" "%d", &kokonaisluku1, &kokonaisluku2);

    printf("Valikko \n 1) Summaa luvut yhteen. \n 2) Kerro luvut keskenään.\n");
    printf("Valitse: ");
    scanf("%d", &valinta);

    if (valinta == 1) {
        int summa = kokonaisluku1 + kokonaisluku2;
        printf("Luvut laskettiin yhteen. Tulos = %d.\n", summa);
    } else if (valinta == 2) {
        int kerto = kokonaisluku1 * kokonaisluku2;
        printf("Luvut kerrottiin keskenään. Tulos = %d.\n", kerto);
    } else {
        printf("Tuntematon valinta.");
    }

    return (0);
}