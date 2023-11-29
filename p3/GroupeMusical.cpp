#include <vector>
#include <iostream>
using namespace std;

#include "Musicien.h"
#include "Musique.h"
#include "GroupeMusical.h"
    
GroupeMusical::GroupeMusical(const string& nom, const string& style, int nombreMaxMembres, int niveau)
  : nom(nom), style(style), nombre_max_membres(nombreMaxMembres), niveau(niveau) {}

// Embauche un musicien
bool GroupeMusical::embaucher_musicien(const Musicien& m) {
  if (membres.size() >= nombre_max_membres || m.get_style() != style) {
      cout << "Le musicien ne peut pas être embauché." << endl;
      return false;
  }
  membres.push_back(m);
  return true;
}

// Joue la musique à l'index donné
void GroupeMusical::jouer(int index) {
  if (index < 0 || index >= repertoire.size() || membres.empty()) {
      cout << "La musique ne peut pas être jouée." << endl;
      return;
  }
  repertoire[index].jouer();
}

// Joue toutes les musiques du répertoire
void GroupeMusical::jouer() {
  if (repertoire.empty() || membres.empty()) {
      cout << "Il n'y a pas de musiciens." << endl;
      return;
  }
  for (const Musique& musique : repertoire) {
      musique.jouer();
  }
}

// Méthodes supplémentaires pour gérer le groupe musical (non spécifiées)
void GroupeMusical::ajouter_musique(const Musique& musique) {
    repertoire.push_back(musique);
}