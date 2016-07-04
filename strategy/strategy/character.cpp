#include "character.h"

Character::Character()
{

}

Character::~Character()
{
    delete flyBehaviour;
    delete walkBehaviour;
}

void Character::setFlyBehaviour(FlyBehaviour* newFlyBehaviour)
{
    if (flyBehaviour != nullptr)
        delete flyBehaviour;
    flyBehaviour = newFlyBehaviour;
}

void Character::setWalkBehaviour(WalkBehaviour* newWalkBehaviour)
{
    if (walkBehaviour != nullptr)
        delete walkBehaviour;
    walkBehaviour = newWalkBehaviour;
}

void Character::fly()
{
    flyBehaviour->fly();
}

void Character::walk()
{
    walkBehaviour->walk();
}

