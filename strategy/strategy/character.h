#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>
#include "flybehaviour.h"
#include "walkbehaviour.h"

//Client
class Character
{
public:
    Character();
    virtual ~Character();

    //We can change the behaviour
    void setFlyBehaviour(FlyBehaviour* newFlyBehaviour);
    void setWalkBehaviour(WalkBehaviour* newWalkBehaviour);

    void fly();
    void walk();

    virtual void info() = 0;

protected:
    FlyBehaviour* flyBehaviour;
    WalkBehaviour* walkBehaviour;
};

#endif // CHARACTER_H
