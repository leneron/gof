#include "grampositivebacteria.h"
#include <random>
#include <iostream>

GrampositiveBacteria::GrampositiveBacteria():
    Bacteria(0.7)
{
    type = GRAMPOSITIVE;
}

bool GrampositiveBacteria::breed(bool favorableConditions)
{
    //can breed if favorable conditions
    //AND can breed itself

    float abilityBreed = (std::rand() % (RANGE + 1)) / RANGE;

    bool canBreed = abilityBreed < probabilityBreed;

    if (favorableConditions && canBreed)
    {
        std::cout << "Grampositive bacteria is breeding"
                  << std::endl;
        return true;
    }
    else
    {
        std::cout << "    Grampositive bacteria is not breeding"
                  << std::endl;
        return false;
    }
}

