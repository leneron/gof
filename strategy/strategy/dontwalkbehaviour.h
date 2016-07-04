#ifndef DONTWALKBEHAVIOUR_H
#define DONTWALKBEHAVIOUR_H

#include "walkbehaviour.h"

//Concrete behaviour of walking
class DontWalkBehaviour: public WalkBehaviour
{
public:
    DontWalkBehaviour();
    ~DontWalkBehaviour();

    void walk() override;
};

#endif // DONTWALKBEHAVIOUR_H
