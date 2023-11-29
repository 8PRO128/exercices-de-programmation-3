#ifndef TELEPHONEPORTABLE_H
#define TELEPHONEPORTABLE_H

#include <iostream>
using namespace std;

class TelephonePortable{
  public:
    // Constructeur
    TelephonePortable(const string& numero_telephone);

    // Méthode pour chercher un numéro de téléphone dans le vecteur
    string chercher_numero(int position);

    // Méthode pour imprimer tous les numéros du vecteur
    void imprimer_numeros();

    // Méthodes supplémentaires pour gérer le téléphone (non spécifiées mais utiles)
    void ajouter_appel_manque();

    void ajouter_numero(const string& numero);

  private:
    string numero_telephone;          // Numéro de téléphone de ce portable
    int nombre_appels_manques;              // Nombre d'appels manqués
    vector<string> telephones;  // Liste de numéros de téléphone
};

#endif