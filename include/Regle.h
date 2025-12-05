#pragma once

#include "Cellule.h"

class Regle {
public:
    virtual EtatCellule* nouvelEtat(const Cellule& cellule, int voisinsVivants) const = 0;
    virtual ~Regle() = default;
};
