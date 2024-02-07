/* 7.2.2024, Heidi Tuurala, L1T2.c, L1T2 */
#include <stdio.h>

int main(void) {
    int luku;
    float liukuluku;

    printf("Anna kokonaisluku: ");
    scanf("%d", &luku);
    printf("Anna liukuluku: ");
    scanf("%f", &liukuluku);

    printf("Annoit luvut %d ja %.2f. \n", luku, liukuluku);

    return(0);
}