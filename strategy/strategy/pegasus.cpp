#include "pegasus.h"
#include "flywingsbehaviour.h"
#include "simplewalkbehaviour.h"

Pegasus::Pegasus()
{
    FlyBehaviour* newflyBehaviour = new FlyWingsBehaviour;
    WalkBehaviour* newWalkBehaviour = new SimpleWalkBehaviour;

    setFlyBehaviour(newflyBehaviour);
    setWalkBehaviour(newWalkBehaviour);
}

Pegasus::~Pegasus()
{

}

void Pegasus::info()
{
    std::cout << "I am Pegasus" << std::endl;
}

