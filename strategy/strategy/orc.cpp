#include "orc.h"
#include "dontflybehaviour.h"
#include "simplewalkbehaviour.h"

Orc::Orc()
{
    FlyBehaviour* newflyBehaviour = new DontFlyBehaviour;
    WalkBehaviour* newWalkBehaviour = new SimpleWalkBehaviour;

    setFlyBehaviour(newflyBehaviour);
    setWalkBehaviour(newWalkBehaviour);
}

Orc::~Orc()
{

}

void Orc::info()
{
    std::cout << "I am OOOORC!" << std::endl;
}

