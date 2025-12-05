#ifndef CELLULE_H
#define CELLULE_H

#include "EtatCellule.h"

class Cellule {
private:
    EtatCellule* etat;
    bool vivante;

public:

    Cellule(int val = 0) : vivante(val) {}
    Cellule(EtatCellule* e);
    Cellule(const Cellule& other);
    Cellule& operator=(const Cellule& other);
    ~Cellule();

    bool estVivante() const;
    void changerEtat(EtatCellule* nouvelEtat);
};

#endif
