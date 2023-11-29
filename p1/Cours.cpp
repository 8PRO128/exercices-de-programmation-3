#include "Cours.h"
#include "SalleDeClasse.h"

void Cours::set_salle(SalleDeClasse& salle) {
  this->salle = &salle;
}

void Cours::set_nom(string& nom) {
  this->nom = nom;
}

SalleDeClasse* Cours::get_salle() const {
  return salle;
}

string Cours::get_nom() const {
  return nom;
}
