#ifndef MORTE_H
#define MORTE_H

#include "EtatCellule.h"

class Morte : public EtatCellule {
public:
    bool estVivante() const override { return false; }
    EtatCellule* clone() const override { return new Morte(*this); }
};

#endif
