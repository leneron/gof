#ifndef ROBOT_H
#define ROBOT_H

//Interface
class Detail
{
public:
    Detail();

    virtual void move() = 0;
};

#endif // ROBOT_H
