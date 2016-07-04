#ifndef ACCELERATOR_H
#define ACCELERATOR_H

#include "robotdecorator.h"

class BoosterEngine: public RobotDecorator
{
public:
    BoosterEngine(Detail* core);

    void move() override;
};

#endif // ACCELERATOR_H
