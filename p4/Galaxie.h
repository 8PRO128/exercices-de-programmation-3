#ifndef GALAXIE_H
#define GALAXIE_H

#include "Constellation.h"

class Galaxie {
  public:
    // Récupère les étoiles les plus grandes de chaque constellation
    vector<Etoile> recuperer_les_plus_grandes_etoiles();

    // Ajoute une constellation à la galaxie
    void ajouter_constellation(const Constellation constellation);

  private:
    vector<Constellation> constellations;
};

#endif