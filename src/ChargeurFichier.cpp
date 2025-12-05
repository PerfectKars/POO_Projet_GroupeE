#include "ChargeurFichier.h"
#include <fstream>

bool ChargeurFichier::charger(const std::string& chemin, int& lignes,
                              int& colonnes, std::vector<std::vector<int>>& matrice)
{
    std::ifstream fichier(chemin);
    if (!fichier.is_open()) return false;

    fichier >> lignes >> colonnes;
    matrice.resize(lignes, std::vector<int>(colonnes));

    for (int i = 0; i < lignes; i++)
        for (int j = 0; j < colonnes; j++)
            fichier >> matrice[i][j];

    return true;
}
