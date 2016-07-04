#ifndef FLYWINGSBEHAVIOUR_H
#define FLYWINGSBEHAVIOUR_H

#include "flybehaviour.h"

//Concrete behaviour of flying
class FlyWingsBehaviour: public FlyBehaviour
{
public:
    FlyWingsBehaviour();
    ~FlyWingsBehaviour();

    void fly() override;
};

#endif // FLYWINGSBEHAVIOUR_H
