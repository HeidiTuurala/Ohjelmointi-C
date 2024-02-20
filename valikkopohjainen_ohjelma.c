/* 20.2.2024, Heidi Tuurala, L2T5.c, L2T5 */

#include <stdio.h>
int main (void) {
    char merkkijono[201] = "";
    int koko = 0;
    int valinta;
    
    do {
        printf("\nValikko\n");
        printf("1) Lisää uusi merkki\n");
        printf("2) Tyhjennä merkkijono\n");
        printf("3) Tulosta merkkijono\n");
        printf("0) Lopeta\n");
        printf("Valintasi: ");
        scanf("%d", &valinta);
        getchar();

        switch (valinta) {
        case 1:
            if (koko < 200) {
                printf("\nAnna jokin merkki: ");
                scanf(" %c", &merkkijono[koko]);
                koko++;
            } else {
                printf("\nMerkkijonoon ei mahdu enempää merkkejä.\n");
            }

            break;

        case 2:
            if (koko == 0) {
                printf("\nMerkkijono on tyhjä.\n");
            } else {
                for (int i = 0; i < koko; i++) {
                    merkkijono[i] = ' ';
                }
                koko = 0;
                printf("\nMerkkijono on tyhjennetty.\n");
            }

            break;

        case 3:
            if (koko == 0) {
                printf("\nMerkkijono on tyhjä.\n");
            } else {
                printf("\nMerkkijono: ");
                for(int i = 0; i < koko; i++){
                    printf("%c", merkkijono[i]);
                }
                printf("\n");
            }
            break;
        
        case 0:
            printf("\nOhjelman lopetus.\n");
            break;

        default:
            printf("\nTuntematon valinta.\n");
            break;
        }

        } while (valinta != 0);

    return(0);
}
