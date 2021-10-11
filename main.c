//
// Created by xioma on 12/10/2021.
//
#define TAILLE_MAX1 100
#include <stdio.h>

int main() {

    int tableau100Entiers[TAILLE_MAX1] = {0};
    int plusGrandEntier=0;
    int entierAInserer=0;
    printf("saisissez 100 entiers.:\n");
    scanf("%d", &entierAInserer);
    int j=0;
    for (j=0; j<entierAInserer; j++) {
        printf("%d\t", tableau100Entiers[j]);
    }
    if (plusGrandEntier<entierAInserer) {
        printf("le plus grand entier du tableau est %d", plusGrandEntier);
    }
    printf("\n");
    return 0;
}