#ifndef ROBOTDECORATOR_H
#define ROBOTDECORATOR_H

#include "detail.h"

//Decorator
class RobotDecorator: public Detail
{
public:
    RobotDecorator(Detail* wrapper);
    ~RobotDecorator();

    void move() override;
private:
    Detail* wrapperRobot;
};

#endif // ROBOTDECORATOR_H
