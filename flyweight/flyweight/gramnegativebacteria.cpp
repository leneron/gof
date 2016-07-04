#include "gramnegativebacteria.h"
#include <random>
#include <iostream>

GramnegativeBacteria::GramnegativeBacteria():
    Bacteria(0.3)
{
    type = GRAMNEGATIVE;
}

bool GramnegativeBacteria::breed(bool favorableConditions)
{
    //can breed in only NOT favorable conditions
    //AND can breed itself

    float abilityBreed = (std::rand() % (RANGE + 1)) / RANGE;

    bool canBreed = abilityBreed < probabilityBreed;

    if (!favorableConditions && canBreed)
    {
        std::cout << "Gramnegative bacteria is breeding"
                  << std::endl;
        return true;
    }
    else
    {
        std::cout << "    Gramnegative bacteria is not breeding"
                  << std::endl;
        return false;
    }
}

