#include "Cellule.h"

Cellule::Cellule(EtatCellule* e) : etat(e) {}

Cellule::Cellule(const Cellule& other) {
    etat = other.etat->clone();
}

Cellule& Cellule::operator=(const Cellule& other) {
    if (this != &other) {
        delete etat;
        etat = other.etat->clone();
    }
    return *this;
}

Cellule::~Cellule() {
    delete etat;
}

bool Cellule::estVivante() const {
    return etat->estVivante();
}

void Cellule::changerEtat(EtatCellule* nouvelEtat) {
    delete etat;
    etat = nouvelEtat;
}
