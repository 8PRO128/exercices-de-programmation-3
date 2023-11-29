#include "Constellation.h"

Constellation::Constellation(const string& nom) : nom(nom) {}

Etoile Constellation::recuperer_plus_grande_etoile() {
  Etoile plus_grande_etoile(0, "");
  for (const Etoile& etoile : etoiles) {
    if (etoile.get_magnitude() > plus_grande_etoile.get_magnitude()) {
      plus_grande_etoile = etoile;
    }
  }
  return plus_grande_etoile;
}

void Constellation::creer_constellation(int position_initiale, int nombre_etoiles) {
  for (int i = 0; i < nombre_etoiles; ++i) {
    string nom_etoile = "Étoile" + to_string(position_initiale + i);
    etoiles.push_back(Etoile(0, nom_etoile));
    cout << "Création de l'étoile : " << nom_etoile << endl;
  }
}

void Constellation::ajouter_etoile(Etoile etoile) {
    etoiles.push_back(etoile);
}