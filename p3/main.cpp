#include "Musicien.h"
#include "Musique.h"
#include "GroupeMusical.h"

#include <iostream>
using namespace std;

int main() {
    // Création de musiciens
    Musicien musicien1("Alice", "Guitare", "Jazz");
    Musicien musicien2("Bob", "Piano", "Jazz");
    Musicien musicien3("Charlie", "Batterie", "Rock");

    // Création d'un groupe musical
    GroupeMusical groupe("Les Jazzmen", "Jazz", 5, 3);

    // Tentative d'embaucher des musiciens
    if (groupe.embaucher_musicien(musicien1)) {
        cout << "Musicien Alice embauché." << endl;
    }
    if (groupe.embaucher_musicien(musicien2)) {
        cout << "Musicien Bob embauché." << endl;
    }
    if (!groupe.embaucher_musicien(musicien3)) {
        cout << "Musicien Charlie n'a pas été embauché (style différent)." << endl;
    }

    // Ajout de musiques au répertoire
    Musique musique1("Jazz en fête", 2);
    Musique musique2("Nuit de Jazz", 3);
    groupe.ajouter_musique(musique1);
    groupe.ajouter_musique(musique2);

    // Jouer une musique spécifique
    groupe.jouer(0); 

    // Jouer tout le répertoire
    groupe.jouer(); 

    return 0;
}
