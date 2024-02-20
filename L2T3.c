/* 20.2.2024, Heidi Tuurala, L2T3.c, L2T3 */
#include <stdio.h>
int main(void) {
    int kierros = 0;
    int luku;

    printf("Anna jokin kokonaisluku väliltä 1-10: ");
    scanf("%d", &luku);

    if (luku < 1 || luku > 10) {
        printf("Antamasi luku ei ole välillä 1-10.");
    } else {
        while (kierros < luku) {
            kierros++;
            printf("%d kierros.\n", kierros);
    }

    }
    return(0);
}