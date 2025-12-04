#ifndef VIVANTE_H
#define VIVANTE_H

#include "EtatCellule.h"

class Vivante : public EtatCellule {
public:
    bool estVivante() const override { return true; }
    EtatCellule* clone() const override { return new Vivante(*this); }
};

#endif
