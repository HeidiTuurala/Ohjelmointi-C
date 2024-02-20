/* 17.2.2024, Heidi Tuurala, L1T5.c, L1T5 */
#include <stdio.h>
#include <string.h>
int main(void) {
    char etunimi [20];
    char sukunimi [30];
    int ika;
    float paino;

    printf("Anna etunimesi: ");
    scanf("%s", etunimi);
    printf("Anna sukunimesi: ");
    scanf("%s", sukunimi);
    printf("Anna ikäsi: ");
    scanf("%d", &ika);
    printf("Anna painosi: ");
    scanf("%f", &paino);
    printf("Nimesi on %s %s, ikäsi on %d vuotta ja painat %.1f kg. \n", etunimi, sukunimi, ika, paino);

    return (0);
}
