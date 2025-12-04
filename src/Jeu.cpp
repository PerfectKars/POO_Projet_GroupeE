#include "Jeu.h"
#include "RenduConsole.h"
#include <iostream>
#include <thread>
#include <chrono>

void Jeu::lancer()
{
    for (iteration = 0; iteration < maxIterations; iteration++)
    {
        std::cout << "Iteration " << iteration << ":\n";
        RenduConsole::afficher(*grille);
        std::cout << "---------------------------\n";

        Grille ancienne = *grille;

        grille->appliquerRegles(*regle);

        if (grille->estEgal(ancienne)) {
            std::cout << "État stable atteint.\n";
            break;
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }

    std::cout << "Iteration finale:\n";
    RenduConsole::afficher(*grille);
}
