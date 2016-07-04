#ifndef BACTERIALFACTORY_H
#define BACTERIALFACTORY_H

#include <map>
#include <string>
#include "bacteria.h"

class BacterialFactory
{
public:
    BacterialFactory();

    Bacteria* createBacteria(const Bacteria::BacteriaType& type);

private:
    std::map<Bacteria::BacteriaType, Bacteria*> bacterium;
};

#endif // BACTERIALFACTORY_H
