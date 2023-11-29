#ifndef MUSICIEN_H
#define MUSICIEN_H

#include <string>
using namespace std;

class Musicien {
  public:
    // Constructeur
    Musicien(const string& nom, const string& instrument, const string& style);

    // Accesseurs (getters)
    string get_nom() const;
    string get_instrument() const;
    string get_style() const;

  private:
    string nom;
    string instrument;
    string style;
};

#endif