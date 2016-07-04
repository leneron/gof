#include <iostream>
#include <random>
#include <ctime>
#include "tourist.h"
#include "businessman.h"
#include "hotel.h"

using namespace std;

int main()
{
    Hotel hotel = Hotel();

    //a businessman orders
    //  - De Luxe : the extendent breakfast
    //  - Standart : the breakfast, the TV

    //a tourist orders
    //  - De Luxe : the extra bar
    //  - Standart : the breakfast

    //fill all the hotel rooms by random guests
    //information about the type of the room is lost
    srand(time(NULL));

    bool isFreeRoom = true;

    while (isFreeRoom)
    {
        Guest* guest;
        int type = rand() % 2;
        if (type)
        {
            guest = new Tourist;
        }
        else
        {
            guest = new Businessman;
        }
        isFreeRoom = hotel.accept(guest);
    }

    return 0;
}

