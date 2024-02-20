/* 17.2.2024, Heidi Tuurala, L1T4.c, L1T4 */
#include <stdio.h>
int main(void) {
    char merkki [2];
    char merkkijono [21];

    printf("Anna merkki: ");
    scanf("%s", merkki);
    printf("Annoit merkin '%s'.\n", merkki);
    printf("Anna korkeintaan 20 merkkiä pitkä merkkijono: ");
    scanf("%s", merkkijono);
    printf("Annoit merkkijonon '%s'.", merkkijono);

    return (0);
}