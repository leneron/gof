#ifndef HABITAT_H
#define HABITAT_H

#include <vector>
#include "bacteria.h"
#include "bacterialfactory.h"

//Client
class Habitat
{
public:
    Habitat(int startPopulationN);

    void simulateBreed(int generations);

private:
    std::vector<Bacteria*> colony;
    BacterialFactory* factory;

    void addBacteria(const Bacteria::BacteriaType& type);
};

#endif // HABITAT_H
