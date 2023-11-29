#include "TelephonePortable.h"

#include <iostream>
using namespace std;

int main() {
    // Création d'une instance de TelephonePortable
    TelephonePortable monTelephone("999-999-9999");

    // Ajout de quelques numéros de téléphone
    monTelephone.ajouter_numero("444-444-4444");
    monTelephone.ajouter_numero("555-555-5555");
    monTelephone.ajouter_numero("232-494-9494");

    // Imprimer tous les numéros de téléphone
    cout << "Liste des numéros enregistrés :" << endl;
    monTelephone.imprimer_numeros();

    // Chercher un numéro de téléphone spécifique
    int position = 1; // Par exemple, chercher le deuxième numéro
    cout << "Numéro de téléphone à la position " << position << " : "
              << monTelephone.chercher_numero(position) << endl;

    return 0;
}
