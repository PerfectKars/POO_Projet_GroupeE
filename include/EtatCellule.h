#pragma once

class EtatCellule {
public:
    virtual bool estVivante() const = 0;
    virtual EtatCellule* clone() const = 0;
    virtual ~EtatCellule() = default;
};
