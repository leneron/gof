#ifndef DONTFLYBEHAVIOUR_H
#define DONTFLYBEHAVIOUR_H

#include "flybehaviour.h"

//Concrete behaviour of flying
class DontFlyBehaviour: public FlyBehaviour
{
public:
    DontFlyBehaviour();
    ~DontFlyBehaviour();

    void fly() override;
};

#endif // DONTFLYBEHAVIOUR_H
