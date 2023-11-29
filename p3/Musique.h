#ifndef MUSIQUE_H
#define MUSIQUE_H

#include <iostream>
using namespace std;

class Musique {
  public:
    // Constructeur
    Musique(const string& nom, int niveau);

    // Méthode pour jouer la musique
    void jouer() const;

  private:
    string nom;
    int niveau;
};

#endif