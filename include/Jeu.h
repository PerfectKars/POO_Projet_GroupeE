#ifndef JEU_H
#define JEU_H

#include "Grille.h"
#include "Regle.h"

class Jeu {
private:
    Grille* grille;
    Regle* regle;
    int iteration;
    int maxIterations;
    int intervalle;

public:
    //Jeu(Grille* g, Regle* r, int maxIt);
    Jeu(Grille* grille, Regle* regle, int intervalle);
    void lancer();
};

#endif
