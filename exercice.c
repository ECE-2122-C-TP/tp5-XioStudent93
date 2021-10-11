//
// Created by xioma on 06/10/2021.
//

#include <stdio.h>
#include "exercice.h"
#include "structures.h"
#define TAILLE_MAX1 10

void exercice1() {
    struct NombreRationnel;
}

void exercice2() {
    int tableau100Entiers[TAILLE_MAX1] = {0};
    int plusGrandEntier=0;
    int entiersAInserer=0;
    printf("saisissez 100 entiers.:\n");
    scanf("%d", &entiersAInserer);
    int j=0;
    for (j=0; j<entiersAInserer; j++) {
        printf("%d\t", tableau100Entiers[j]);
    }
    if (plusGrandEntier<entiersAInserer) {
        printf("le plus grand entier du tableau est %d", plusGrandEntier);
    }
    printf("\n");
}
