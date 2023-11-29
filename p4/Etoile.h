#ifndef ETOILE_H
#define ETOILE_H

#include <iostream>
using namespace std;

// Classe représentant une étoile
class Etoile {
  public:
    // Constructeur
    Etoile(int magnitude, const string& nom);

    // Accesseurs (getters)
    int get_magnitude() const;
    string getNom() const;

    // Mutateurs (setters)
    void set_magnitude(int magnitude);

    void set_nom(const string& nom);

  private:
    int magnitude;
    string nom;
};

#endif