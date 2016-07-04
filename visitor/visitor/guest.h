#ifndef GUEST_H
#define GUEST_H

#include "deluxeroom.h"
#include "standartroom.h"

class Room;

//Concrete visitor 1
class Guest
{
public:
    Guest();

    virtual void settle(DeluxeRoom* room) = 0;
    virtual void settle(StandartRoom* room) = 0;
};

#endif // GUEST_H
