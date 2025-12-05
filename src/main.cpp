#include "ChargeurFichier.h"
#include "Grille.h"
#include "RegleStandard.h"
#include "Jeu.h"
#include "RenduGraphiqueSFML.h"
#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
    int L = 20, C = 20; 
    Grille grille;
    RegleStandard regle;

    if (argc < 2) {
        std::cout << "Aucun fichier donné.\n";
    } else {
        
        std::vector<std::vector<int>> matrice;
        if (!ChargeurFichier::charger(argv[1], L, C, matrice)) {
            std::cout << "Fichier invalide !\n";
            std::cout << "Vérifier Matric1.txt\n";
        } else {
            grille = Grille(L, C, matrice); 
        }
    }

    
    int cellSize = 20;  
    RenduGraphiqueSFML rendu(C * cellSize, L * cellSize + 60, cellSize);  

    Jeu jeu(&grille, &regle, 200); 

    int maxIterations = 200; 
    int iterationCount = 0;  

    
    while (rendu.estOuvert() && iterationCount < maxIterations) {
        rendu.gererEvenements();  
        rendu.afficher(grille);   
        grille.appliquerRegles(regle); 
        sf::sleep(sf::milliseconds(200));  

        iterationCount++;  
    }

    std::cout << "Nombre d'itérations maximum atteint ou jeu terminé.\n";

    
    grille.sauvegarderEtat("matrice2.txt");

    return iterationCount;  
}
