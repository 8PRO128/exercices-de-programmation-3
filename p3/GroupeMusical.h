#ifndef GROUPEMUSICAL_H
#define GROUPEMUSICAL_H

#include "Musicien.h"
#include "Musique.h"

class GroupeMusical {
  public:
    // Constructeur
    GroupeMusical(const string& nom, const string& style, int nombreMaxMembres, int niveau);

    // Embauche un musicien
    bool embaucher_musicien(const Musicien& m);

    // Joue la musique à l'index donné
    void jouer(int index);

    // Joue toutes les musiques du répertoire
    void jouer();

    // Méthodes supplémentaires pour gérer le groupe musical (non spécifiées)
    void ajouter_musique(const Musique& musique);

  private:
    string nom;
    vector<Musicien> membres;
    string style;
    vector<Musique> repertoire;
    int nombre_max_membres;
    int niveau;
};

#endif