#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <iostream>
#include <vector>
using namespace std;

#include "Cours.h"

class Etudiant {
  private:
    string nom;
    vector<Cours*> cours;
  
  public:
    void set_nom(string& nom);
    string get_nom();

    // Dans ce cas, je n'ai pas ajouté get et set au vecteur 
    // car en général nous traitons les vecteurs d'une autre manière, 
    // en ajoutant et en supprimant des éléments.  
};

#endif