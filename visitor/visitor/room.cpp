#include "room.h"

Room::Room(): free(true)
{

}

bool Room::getFree() const
{
    return free;
}

void Room::freeRoom()
{
    free = true;
}

void Room::busyRoom()
{
    free = false;
}


