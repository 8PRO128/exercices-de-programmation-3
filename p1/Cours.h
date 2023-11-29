#ifndef COURS_H
#define COURS_H

#include <iostream>
using namespace std;

#include "SalleDeClasse.h"

class Cours {
  private:
    SalleDeClasse* salle;
    string nom;
  
  public:
    void set_salle(SalleDeClasse& salle);
    void set_nom(string& nom);

    SalleDeClasse* get_salle() const;
    string get_nom() const;
    
};

#endif