#ifndef RENDU_GRAPHIQUE_SFML_H
#define RENDU_GRAPHIQUE_SFML_H

#include <SFML/Graphics.hpp>
#include "Grille.h"

class RenduGraphiqueSFML {
private:
    int cellSize;
    sf::RenderWindow window;

public:
    RenduGraphiqueSFML(int width, int height, int cellSize);

    void afficher(const Grille& grille);
    void gererEvenements();
    bool estOuvert() const;
};

#endif
