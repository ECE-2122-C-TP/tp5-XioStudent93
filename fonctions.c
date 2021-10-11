//
// Created by xioma on 11/10/2021.
//
#include "fonctions.h"
#include <stdio.h>
#include "structures.h"

int saisieNombreRationnel () {
    int numerateur=0, denominateur=0;
    printf("saisissez au clavier le numérateur et le dénominateur de votre nombre rationnel.:\n");
    scanf("%d %d", &numerateur, &denominateur);
    return numerateur/denominateur;
}

struct NombreRationnel multiplication(struct NombreRationnel nombre1, struct NombreRationnel nombre2) {
    struct NombreRationnel n;
    n.numerateur=nombre1.numerateur * nombre2.numerateur;
    n.numerateur=nombre1.denominateur * nombre2.denominateur;
    return n;
}

struct NombreRationnel addition(struct NombreRationnel nombre1, struct NombreRationnel nombre2) {
    struct NombreRationnel n;
    n.numerateur=nombre1.numerateur + nombre2.numerateur;
    n.numerateur=nombre1.denominateur + nombre2.denominateur;
    return n;
}

struct NombreRationnel afficher(struct NombreRationnel nombre) {
    printf("le nombre rationnel est %d/%d\n", nombre.numerateur, nombre.denominateur);

}