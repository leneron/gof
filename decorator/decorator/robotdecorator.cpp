#include "robotdecorator.h"

RobotDecorator::RobotDecorator(Detail* wrapper):
                        wrapperRobot(wrapper)
{

}

RobotDecorator::~RobotDecorator()
{
    delete wrapperRobot;
}

void RobotDecorator::move()
{
    wrapperRobot->move();
}

