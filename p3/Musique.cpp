#include "Musique.h"

Musique::Musique(const string& nom, int niveau)
    : nom(nom), niveau(niveau) {}

void Musique::jouer() const {
    cout << "Joue la musique " << nom << endl;
}
