#ifndef DELUXEROOM_H
#define DELUXEROOM_H

#include "room.h"

//Concrete element 2
class DeluxeRoom: public Room
{
public:
    DeluxeRoom();

    void accept(Guest* guest) override;

    void orderExtraBar();
    void orderExtendedBreakfast();
};

#endif // DELUXEROOM_H
