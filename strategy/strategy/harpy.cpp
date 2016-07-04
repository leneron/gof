#include "harpy.h"
#include "flywingsbehaviour.h"
#include "dontwalkbehaviour.h"

Harpy::Harpy()
{
    FlyBehaviour* newflyBehaviour = new FlyWingsBehaviour;
    WalkBehaviour* newWalkBehaviour = new DontWalkBehaviour;

    setFlyBehaviour(newflyBehaviour);
    setWalkBehaviour(newWalkBehaviour);
}

Harpy::~Harpy()
{

}

void Harpy::info()
{
    std::cout << "I am Harpy" << std::endl;
}

