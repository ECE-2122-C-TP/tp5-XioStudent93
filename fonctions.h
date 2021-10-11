//
// Created by xioma on 11/10/2021.
//

#ifndef TP5_FONCTIONS_H
#define TP5_FONCTIONS_H

//IN : rien.
//OUT : nombre Rationnel.
int saisieNombreRationnel ();

//IN : deux nombre rationnels.
//OUT : Nombre Rationnel.
struct NombreRationnel multiplication(struct NombreRationnel nombre1, struct NombreRationnel nombre2);

//IN : deux nombre rationnels.
//OUT : Nombre Rationnel.
struct NombreRationnel addition(struct NombreRationnel nombre1, struct NombreRationnel nombre2);

//IN : nombre rationnel.
//OUT : rien.
struct NombreRationnel afficher(struct NombreRationnel nombre);

#endif //TP5_FONCTIONS_H
