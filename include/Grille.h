#ifndef GRILLE_H
#define GRILLE_H

#include <vector>
#include "Cellule.h"
#include "Regle.h"
#include <string>

class Grille {
private:
    int lignes, colonnes;
    std::vector<std::vector<Cellule>> cellules;

public:

    Grille() : lignes(0), colonnes(0) {}
    Grille(int l, int c, const std::vector<std::vector<int>>& init);

    int compterVoisinsVivants(int i, int j) const;
    void sauvegarderEtat(const std::string& nomFichier) const; 
    void appliquerRegles(const Regle& regle);
    void genererMatriceAleatoire(int lignes, int colonnes);

    bool estEgal(const Grille& autre) const;

    const std::vector<std::vector<Cellule>>& getCellules() const { return cellules; }
};

#endif
