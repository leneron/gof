#ifndef WHEEL_H
#define WHEEL_H

#include "robotdecorator.h"

class Wheel: public RobotDecorator
{
public:
    Wheel(Detail* core);

    void move() override;
};

#endif // WHEEL_H
