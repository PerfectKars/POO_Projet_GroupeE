#include "Grille.h"
#include "Vivante.h"
#include "Morte.h"
#include "iostream"
#include <cstdlib> 
#include <ctime>  
#include <fstream>

Grille::Grille(int l, int c, const std::vector<std::vector<int>>& init)
    : lignes(l), colonnes(c)
{
    cellules.reserve(lignes);
    for (int i = 0; i < lignes; i++) {
        std::vector<Cellule> ligne;
        ligne.reserve(colonnes);
        for (int j = 0; j < colonnes; j++) {
            ligne.emplace_back(init[i][j] == 1 ? (EtatCellule*) new Vivante()
                                               : (EtatCellule*) new Morte());
        }
        cellules.push_back(ligne);
    }
}

int Grille::compterVoisinsVivants(int i, int j) const
{
    int count = 0;

    for (int dx = -1; dx <= 1; dx++)
        for (int dy = -1; dy <= 1; dy++) {
            if (dx == 0 && dy == 0) continue;

            int nx = i + dx;
            int ny = j + dy;

            if (nx >= 0 && nx < lignes && ny >= 0 && ny < colonnes)
                if (cellules[nx][ny].estVivante())
                    count++;
        }

    return count;
}

void Grille::appliquerRegles(const Regle& regle)
{
    std::vector<std::vector<Cellule>> nouvelle = cellules;

    for (int i = 0; i < lignes; i++)
        for (int j = 0; j < colonnes; j++) {
            int voisins = compterVoisinsVivants(i, j);
            EtatCellule* nv = regle.nouvelEtat(cellules[i][j], voisins);
            nouvelle[i][j].changerEtat(nv);
        }

    cellules = nouvelle;
}

bool Grille::estEgal(const Grille& autre) const {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            if (cellules[i][j].estVivante() != autre.cellules[i][j].estVivante())
                return false;
        }
    }
    return true;
}



void Grille::sauvegarderEtat(const std::string& nomFichier) const {
    std::ofstream outFile(nomFichier);  // Ouvre un fichier en mode écriture

    if (!outFile) {
        std::cerr << "Impossible d'ouvrir le fichier " << nomFichier << " pour l'écriture !" << std::endl;
        return;
    }

    outFile << lignes << " " << colonnes << std::endl;

    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            outFile << (cellules[i][j].estVivante() ? "1" : "0") << " ";
        }
        outFile << std::endl;
    }

    outFile.close();  // Ferme le fichier après l'écriture
    std::cout << "État final de la grille sauvegardé dans " << nomFichier << std::endl;
}
