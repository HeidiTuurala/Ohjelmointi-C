/* 7.2.2024, Heidi Tuurala, L1T3.c, L1T3 */
#include <stdio.h>

int main(void) {
    int luku1;
    int luku2;
    char merkki[] = "%";

    printf("Anna ensimmäinen kokonaisluku: ");
    scanf("%d", &luku1);
    printf("Anna toinen kokonaisluku: ");
    scanf("%d", &luku2);

    int summa = (luku1 + luku2) * 2;

    printf("(%d + %d) * 2 = %d\n", luku1, luku2, summa);

    int osamaara = luku1/luku2 - 3;

    printf("(%d / %d) - 3 = %d\n", luku1, luku2, osamaara);

    int jakojaannos = ++luku1 % --luku2;

    printf("%d %s %d = %d\n", luku1, merkki, luku2, jakojaannos);

    return(0);
}