#include "TelephonePortable.h"

TelephonePortable::TelephonePortable(const string& numero_telephone)
    : numero_telephone(numero_telephone), nombre_appels_manques(0) {}

// Méthode pour chercher un numéro de téléphone dans le vecteur
string TelephonePortable::chercher_numero(int position) {
    // Vérifie si la position est valide
    if (position >= 0 && position < telephones.size()) {
        return telephones[position];
    } else {
        return "Position invalide";
    }
}

// Méthode pour imprimer tous les numéros du vecteur
void TelephonePortable::imprimer_numeros() {
    for (const string& numero : telephones) {
        cout << numero << endl;
    }
}

// Méthodes supplémentaires pour gérer le téléphone (non spécifiées mais utiles)
void TelephonePortable::ajouter_appel_manque() {
    nombre_appels_manques++;
}

void TelephonePortable::ajouter_numero(const string& numero) {
    telephones.push_back(numero);
}
