#ifndef SIMPLEWALKBEHAVIOUR_H
#define SIMPLEWALKBEHAVIOUR_H

#include "walkbehaviour.h"

//Concrete behaviour of walking
class SimpleWalkBehaviour: public WalkBehaviour
{
public:
    SimpleWalkBehaviour();
    ~SimpleWalkBehaviour();

    void walk() override;
};

#endif // SIMPLEWALKBEHAVIOUR_H
