#include "ChargeurFichier.h"
#include "Grille.h"
#include "RegleStandard.h"
#include "Jeu.h"
#include "RenduGraphiqueSFML.h"
#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
    int L = 20, C = 20;  // Valeurs par défaut pour la taille de la grille
    Grille grille;
    RegleStandard regle;

    if (argc < 2) {
        std::cout << "Aucun fichier donné.\n";
    } else {
        // Sinon, charger la matrice depuis un fichier
        std::vector<std::vector<int>> matrice;
        if (!ChargeurFichier::charger(argv[1], L, C, matrice)) {
            std::cout << "Fichier invalide !\n";
            std::cout << "Vérifier Matric1.txt\n";
        } else {
            grille = Grille(L, C, matrice);  // Initialise la grille avec la matrice chargée
        }
    }

    // Configuration de la fenêtre SFML
    int cellSize = 20;  // Taille de chaque cellule
    RenduGraphiqueSFML rendu(C * cellSize, L * cellSize + 60, cellSize);  // Fenêtre graphique

    Jeu jeu(&grille, &regle, 200);  // Crée le jeu avec la grille et la règle

    int maxIterations = 200;  // Nombre d'itérations max
    int iterationCount = 0;  // Compteur d'itérations

    // Lancer la boucle de jeu
    while (rendu.estOuvert() && iterationCount < maxIterations) {
        rendu.gererEvenements();  // Gérer les événements (fermeture, etc.)
        rendu.afficher(grille);   // Afficher la grille mise à jour
        grille.appliquerRegles(regle);  // Appliquer les règles du jeu
        sf::sleep(sf::milliseconds(200));  // Attendre 200 ms entre les itérations

        iterationCount++;  // Incrémenter le compteur d'itérations
    }

    std::cout << "Nombre d'itérations maximum atteint ou jeu terminé.\n";

    // Sauvegarder l'état final de la grille dans un fichier "matrice2.txt"
    grille.sauvegarderEtat("matrice2.txt");

    return iterationCount;  // Retourner le nombre d'itérations effectuées
}
