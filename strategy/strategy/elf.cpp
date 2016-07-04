#include "elf.h"
#include "dontflybehaviour.h"
#include "simplewalkbehaviour.h"

Elf::Elf()
{
    FlyBehaviour* newflyBehaviour = new DontFlyBehaviour;
    WalkBehaviour* newWalkBehaviour = new SimpleWalkBehaviour;

    setFlyBehaviour(newflyBehaviour);
    setWalkBehaviour(newWalkBehaviour);
}

Elf::~Elf()
{

}

void Elf::info()
{
    std::cout << "I am Elf" << std::endl;
}

