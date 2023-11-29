#include "Etoile.h"

Etoile::Etoile(int magnitude, const string& nom) 
                : magnitude(magnitude), nom(nom) {}

int Etoile::get_magnitude() const {
  return magnitude;
}

string Etoile::getNom() const {
  return nom;
}

void Etoile::set_magnitude(int magnitude) {
  if (magnitude >= 0 && magnitude <= 8) {
    this->magnitude = magnitude;
  }
}

void Etoile::set_nom(const string& nom) {
  if (!nom.empty()) {
    this->nom = nom;
  }
}