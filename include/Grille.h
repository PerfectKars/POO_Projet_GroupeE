#ifndef GRILLE_H
#define GRILLE_H

#include <vector>
#include "Cellule.h"
#include "Regle.h"

class Grille {
private:
    int lignes, colonnes;
    std::vector<std::vector<Cellule>> cellules;

public:
    Grille(int l, int c, const std::vector<std::vector<int>>& init);

    int compterVoisinsVivants(int i, int j) const;
    void appliquerRegles(const Regle& regle);

    bool estEgal(const Grille& autre) const;

    const std::vector<std::vector<Cellule>>& getCellules() const { return cellules; }
};

#endif
