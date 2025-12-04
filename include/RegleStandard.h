#ifndef REGLE_STANDARD_H
#define REGLE_STANDARD_H

#include "Regle.h"
#include "Vivante.h"
#include "Morte.h"

class RegleStandard : public Regle {
public:
    EtatCellule* nouvelEtat(const Cellule& cellule, int voisinsVivants) const override;
};

#endif
