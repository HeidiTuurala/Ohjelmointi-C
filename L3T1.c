/* 21.2.2024, Heidi Tuurala, L3T1.c, L3T1 */

#include <stdio.h>

int potenssi(int luku1, int luku2);

int main (void){
    int arvo1;
    int arvo2;

    printf("Ohjelma laskee luvun potenssin.\n");
    printf("Anna kokonaisluku, jonka haluat korottaa potenssiin: ");
    scanf("%d", &arvo1);
    printf("Anna potenssi, jonka haluat laskea: ");
    scanf("%d", &arvo2);

    int vastaus = potenssi(arvo1, arvo2);
    printf("%d ^ %d = %d.\n", arvo1, arvo2, vastaus);

    printf("Kiitos ohjelman käytöstä.\n");
    return(0);
}

int potenssi(int luku1, int luku2){
    int tulos = 1;
    for(int i = 0; i < luku2; i++){
        tulos *= luku1;
    }
    return tulos;
}