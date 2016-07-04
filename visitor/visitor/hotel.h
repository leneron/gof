#ifndef HOTEL_H
#define HOTEL_H

#include <string>
#include <vector>
#include "room.h"

class Hotel
{
public:
    Hotel();
    ~Hotel();

    bool accept(Guest* guest);
    std::string info();

private:
    const int MAX_ROOMS_N = 10;

    std::vector<Room*> rooms;

    bool findFreeRoom(int& i);
    void generateRandomRooms();
};

#endif // HOTEL_H
