#include <iostream>           // ← OBLIGATOIRE !!!
#include <SFML/System.hpp>
#include "ChargeurFichier.h"
#include "Grille.h"
#include "RegleStandard.h"
#include "RenduGraphiqueSFML.h"

int main(int argc, char** argv)
{
    if (argc < 2) {
        std::cout << "Usage : ./jeu fichier.txt\n";
        return 1;
    }

    int L, C;
    std::vector<std::vector<int>> matrice;

    if (!ChargeurFichier::charger(argv[1], L, C, matrice)) {
        std::cout << "Fichier invalide !\n";
        return 1;
    }

    Grille grille(L, C, matrice);
    RegleStandard regle;

    int cellSize = 20;
    RenduGraphiqueSFML rendu(C * cellSize, L * cellSize, cellSize);

    while (rendu.estOuvert()) {
        rendu.gererEvenements();
        rendu.afficher(grille);
        grille.appliquerRegles(regle);
        sf::sleep(sf::milliseconds(200));
    }

    return 0;
}
