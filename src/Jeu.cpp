#include "Jeu.h"
#include "RenduConsole.h"
#include <iostream>
#include <thread>
#include <chrono>

Jeu::Jeu(Grille* grille, Regle* regle, int intervalle) {
    this->grille = grille;
    this->regle = regle;
    this->intervalle = intervalle;
}

void Jeu::lancer() {
    for (iteration = 0; iteration < maxIterations; iteration++) {
        std::cout << "Iteration " << iteration << ":\n";
        RenduConsole::afficher(*grille);
        std::cout << "---------------------------\n";

        Grille ancienne = *grille;  

        grille->appliquerRegles(*regle);

        if (grille->estEgal(ancienne)) {
            std::cout << "État stable atteint.\n";
            break;
        }

    }

    std::cout << "Itération finale:\n";
    RenduConsole::afficher(*grille);
}
