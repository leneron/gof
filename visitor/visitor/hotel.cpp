#include <random>
#include <ctime>
#include "hotel.h"
#include "deluxeroom.h"
#include "standartroom.h"

Hotel::Hotel()
{
    generateRandomRooms();
    srand(time(NULL));
}

Hotel::~Hotel()
{

}

bool Hotel::accept(Guest* guest)
{
    int i;
    if (findFreeRoom(i))
    {
        rooms[i]->accept(guest);
        return true;
    }
    else
        return false;
}

std::string Hotel::info()
{

}

bool Hotel::findFreeRoom(int& i)
{
    int j = 0;
    while ((j < rooms.size())
            && (!rooms[j]->getFree()))
        j++;

    //if there is no free space
    if (j == rooms.size())
    {
        return false;
    }
    else
    {
        i = j;
        return true;
    }
}

void Hotel::generateRandomRooms()
{
    //random number of rooms <= max number of rooms
    int roomsN = MAX_ROOMS_N;//rand() % MAX_ROOMS_N + 1;

    for (int i = 0; i < roomsN; i++)
    {
        //random type of the room
        //after creation we don't know about the type
        int type = rand() % 2;
        if (type == 0)
        {
            Room* room = new DeluxeRoom;
            rooms.push_back(room);
        }
        else
        {
            Room* room = new StandartRoom;
            rooms.push_back(room);
        }
    }
}

