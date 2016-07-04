#ifndef FLYBEHAVIOUR_H
#define FLYBEHAVIOUR_H

#include <iostream>

//Abstract strategy 1
class FlyBehaviour
{
public:
    FlyBehaviour();
    virtual ~FlyBehaviour();

    virtual void fly() = 0;
};

#endif // FLYBEHAVIOUR_H
