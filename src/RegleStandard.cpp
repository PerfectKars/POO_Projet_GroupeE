#include "RegleStandard.h"

EtatCellule* RegleStandard::nouvelEtat(const Cellule& cellule, int voisins) const
{
    if (cellule.estVivante()) {
        if (voisins == 2 || voisins == 3) return new Vivante();
        return new Morte();
    }
    else {
        if (voisins == 3) return new Vivante();
        return new Morte();
    }
}
