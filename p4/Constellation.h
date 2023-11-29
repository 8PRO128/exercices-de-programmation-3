#ifndef CONSTELLATION_H
#define CONSTELLATION_H

#include "Etoile.h"
#include <iostream>
#include <vector>
using namespace std;

class Constellation {
  public:
    // Constructeur
    Constellation(const string& nom);

    // Récupère l'étoile avec la plus grande magnitude
    Etoile recuperer_plus_grande_etoile();

    // Crée une constellation
    void creer_constellation(int positionInitiale, int nombreEtoiles);

    void ajouter_etoile(Etoile etoile);

  private:
    string nom;
    vector<Etoile> etoiles;
};

#endif