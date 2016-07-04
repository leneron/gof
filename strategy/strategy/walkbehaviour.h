#ifndef WALKBEHAVIOUR_H
#define WALKBEHAVIOUR_H

#include <iostream>

//Abstract strategy 2
class WalkBehaviour
{
public:
    WalkBehaviour();
    virtual ~WalkBehaviour();

    virtual void walk() = 0;
};

#endif // WALKBEHAVIOUR_H
