#include "RenduGraphiqueSFML.h"

RenduGraphiqueSFML::RenduGraphiqueSFML(int width, int height, int cellSize)
    : cellSize(cellSize),
      window(sf::VideoMode({(unsigned int)width, (unsigned int)height}), "Jeu de la Vie - SFML")
{
}

bool RenduGraphiqueSFML::estOuvert() const {
    return window.isOpen();
}

void RenduGraphiqueSFML::gererEvenements()
{
    while (auto event = window.pollEvent()) {
        if (event->is<sf::Event::Closed>())
            window.close();
    }
}

void RenduGraphiqueSFML::afficher(const Grille& grille)
{
    window.clear(sf::Color::Black);

    const auto& cells = grille.getCellules();

    sf::RectangleShape rect({(float)cellSize - 1, (float)cellSize - 1});

    for (int i = 0; i < (int)cells.size(); i++) {
        for (int j = 0; j < (int)cells[i].size(); j++) {

            if (cells[i][j].estVivante())
                rect.setFillColor(sf::Color::Green);
            else
                rect.setFillColor(sf::Color(50, 50, 50));

            rect.setPosition({(float)(j * cellSize), (float)(i * cellSize)});
            window.draw(rect);
        }
    }

    window.display();
}
