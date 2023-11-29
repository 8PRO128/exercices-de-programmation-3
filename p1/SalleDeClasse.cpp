#include "SalleDeClasse.h"

void SalleDeClasse::set_numero(string& numero) {
  this->numero = numero;
}
void SalleDeClasse::set_capacite(int capacite) {
  this->capacite = capacite;
}

string SalleDeClasse::get_numero() const {
  return numero;
}

int SalleDeClasse::get_capacite() const {
  return capacite;
}