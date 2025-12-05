#include "RenduConsole.h"
#include <iostream>

void RenduConsole::afficher(const Grille& grille)
{
    const auto& tab = grille.getCellules();

    for (const auto& ligne : tab) {
        for (const auto& cellule : ligne)
            std::cout << (cellule.estVivante() ? "1 " : "0 ");
        std::cout << "\n";
    }
}
