#ifndef BASEROBOT_H
#define BASEROBOT_H

#include "detail.h"

//core functionality
class BaseRobot: public Detail
{
public:
    BaseRobot();

    void move() override;
};

#endif // BASEROBOT_H
