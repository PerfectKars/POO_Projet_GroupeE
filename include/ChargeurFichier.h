#pragma once

#include <string>
#include <vector>

class ChargeurFichier {
public:
    static bool charger(const std::string& chemin,
                        int& lignes,
                        int& colonnes,
                        std::vector<std::vector<int>>& matrice);
};
