#ifndef ETAT_CELLULE_H
#define ETAT_CELLULE_H

class EtatCellule {
public:
    virtual bool estVivante() const = 0;
    virtual EtatCellule* clone() const = 0;
    virtual ~EtatCellule() = default;
};

#endif
