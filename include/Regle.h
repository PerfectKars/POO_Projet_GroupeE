#ifndef REGLE_H
#define REGLE_H

#include "Cellule.h"

class Regle {
public:
    virtual EtatCellule* nouvelEtat(const Cellule& cellule, int voisinsVivants) const = 0;
    virtual ~Regle() = default;
};

#endif
