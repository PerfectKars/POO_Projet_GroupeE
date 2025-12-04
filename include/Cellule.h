#ifndef CELLULE_H
#define CELLULE_H

#include "EtatCellule.h"

class Cellule {
private:
    EtatCellule* etat;

public:
    Cellule(EtatCellule* e);
    Cellule(const Cellule& other);
    Cellule& operator=(const Cellule& other);
    ~Cellule();

    bool estVivante() const;
    void changerEtat(EtatCellule* nouvelEtat);
};

#endif
