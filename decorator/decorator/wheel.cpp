#include <iostream>
#include <string>
#include "wheel.h"

Wheel::Wheel(Detail* core): RobotDecorator(core)
{

}

void Wheel::move()
{
    RobotDecorator::move();
    std::cout << "The path is circular." << std::endl;
}

