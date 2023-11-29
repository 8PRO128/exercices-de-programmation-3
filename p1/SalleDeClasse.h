#ifndef  SALLEDECLASSE_H
#define SALLEDECLASSE_H

#include <iostream>
using namespace std;

class SalleDeClasse {
  private:
    string numero;
    int capacite;
  
  public:
    void set_numero(string& numero);
    void set_capacite(int capacite);

    string get_numero() const;
    int get_capacite() const;
};

#endif