#include <iostream>
#include <string>
#include "boosterengine.h"

BoosterEngine::BoosterEngine(Detail* core):
                    RobotDecorator(core)
{

}

void BoosterEngine::move()
{
    RobotDecorator::move();
    std::cout << "The speed is 20 km/h" << std::endl;
}

