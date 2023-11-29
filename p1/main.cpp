#include "Cours.h"
#include "Etudiant.h"
#include "SalleDeClasse.h"
#include <string> // Add this line to include the <string> library

int main() {
  SalleDeClasse* salle = new SalleDeClasse();
  salle->set_capacite(10);
  string numero = "P1-5000"; 
  salle->set_numero(numero); 

  Cours* cours = new Cours();
  string nom = "8PRO128";
  cours->set_nom(nom);
  cours->set_salle(*salle);

  Etudiant* etudiant = new Etudiant();
  string nom_etudiant = "Eduardo";

  delete salle;
  delete cours;
  delete etudiant;

  return 0;
}
