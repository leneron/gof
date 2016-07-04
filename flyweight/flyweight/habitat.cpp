#include "habitat.h"
#include <random>
#include <ctime>
#include <iostream>

Habitat::Habitat(int startPopulationN)
{
    std::srand(std::time(nullptr));

    factory = new BacterialFactory;

    for (int i = 0; i < startPopulationN; i++)
    {
        Bacteria::BacteriaType type;
        type = Bacteria::BacteriaType(std::rand() % 2);

        this->addBacteria(type);
    }
}

void Habitat::simulateBreed(int generationsN)
{
    for (int i = 0; i < generationsN; i++)
    {
        std::cout << "GENERATION #" << i + 1 << std::endl;
        //should be fixed!
        size_t colonySize = colony.size();
        for (size_t i = 0; i < colonySize; i++)
        {
            Bacteria* bacteria = colony[i];
            bool favorableConditions = bool(std::rand() % 2);
            bool breeded = bacteria->breed(favorableConditions);
            if (breeded)
            {
                this->addBacteria(bacteria->getType());
            }
        }
        std::cout << std::endl;
    }
}

void Habitat::addBacteria(const Bacteria::BacteriaType& type)
{
    Bacteria* bacteria = factory->createBacteria(type);
    colony.push_back(bacteria);
}

