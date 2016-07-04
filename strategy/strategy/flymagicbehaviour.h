#ifndef FLYMAGICBEHAVIOUR_H
#define FLYMAGICBEHAVIOUR_H

#include "flybehaviour.h"

//Concrete behaviour of flying
class FlyMagicBehaviour: public FlyBehaviour
{
public:
    FlyMagicBehaviour();
    ~FlyMagicBehaviour();

    void fly() override;
};

#endif // FLYMAGICBEHAVIOUR_H
