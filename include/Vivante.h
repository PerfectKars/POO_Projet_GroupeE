#pragma once

#include "EtatCellule.h"

class Vivante : public EtatCellule {
public:
    bool estVivante() const override { return true; }
    EtatCellule* clone() const override { return new Vivante(*this); }
};
