#ifndef GRAMPOSITIVEBACTERIA_H
#define GRAMPOSITIVEBACTERIA_H

#include "bacteria.h"

//Concrete flyweight
class GrampositiveBacteria: public Bacteria
{
public:
    GrampositiveBacteria();

    bool breed(bool favorableConditions) override;
};

#endif // GRAMPOSITIVEBACTERIA_H
