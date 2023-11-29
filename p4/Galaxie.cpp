#include "Galaxie.h"

vector<Etoile> Galaxie::recuperer_les_plus_grandes_etoiles() {
  vector<Etoile> plus_grandes_etoiles;
  for (Constellation constellation : constellations) {
    plus_grandes_etoiles.push_back(constellation.recuperer_plus_grande_etoile());
  }
  return plus_grandes_etoiles;
}

void Galaxie::ajouter_constellation(const Constellation constellation) {
  constellations.push_back(constellation);
}