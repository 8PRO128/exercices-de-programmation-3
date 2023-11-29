#include "Galaxie.h"

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Création de étoiles
    Etoile etoile1(3, "Sirius");
    Etoile etoile2(2, "Canopus");
    Etoile etoile3(4, "Arcturus");

    // Création de constellations
    Constellation constellation1("Orion");
    constellation1.creer_constellation(1, 5);

    Constellation constellation2("Cassiopée");
    constellation2.creer_constellation(6, 3);

    // Ajout des étoiles spécifiques aux constellations
    constellation1.ajouter_etoile(etoile1);
    constellation2.ajouter_etoile(etoile2);
    constellation2.ajouter_etoile(etoile3);

    // Création d'une galaxie
    Galaxie galaxie;
    galaxie.ajouter_constellation(constellation1);
    galaxie.ajouter_constellation(constellation2);

    // Récupération des étoiles les plus grandes de chaque constellation
    vector<Etoile> etoiles_plus_grandes = galaxie.recuperer_les_plus_grandes_etoiles();

    // Affichage des étoiles les plus grandes
    cout << "Les étoiles les plus grandes dans la galaxie :" << endl;
    for (const Etoile& etoile : etoiles_plus_grandes) {
        cout << etoile.getNom() << " avec une magnitude de " << etoile.get_magnitude() << endl;
    }

    return 0;
}
