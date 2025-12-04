#ifndef JEU_H
#define JEU_H

#include "Grille.h"
#include "Regle.h"

class Jeu {
private:
    Grille* grille;
    Regle* regle;
    int iteration = 0;
    int maxIterations;

public:
    Jeu(Grille* g, Regle* r, int maxIt);
    void lancer();
};

#endif
