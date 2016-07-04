#ifndef GRAMNEGATIVEBACTERIA_H
#define GRAMNEGATIVEBACTERIA_H

#include "bacteria.h"

//Concrete flyweight
class GramnegativeBacteria: public Bacteria
{
public:
    GramnegativeBacteria();

    bool breed(bool favorableConditions) override;
};

#endif // GRAMNEGATIVEBACTERIA_H
