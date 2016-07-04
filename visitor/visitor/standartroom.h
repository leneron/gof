#ifndef STANDARTROOM_H
#define STANDARTROOM_H

#include "room.h"

//Concrete element 1
class StandartRoom: public Room
{
public:
    StandartRoom();

    void accept(Guest* guest) override;

    void orderBreakfast();
    void orderTv();
};

#endif // STANDARTROOM_H
