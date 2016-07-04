#include <iostream>
#include "standartroom.h"
#include "guest.h"

StandartRoom::StandartRoom()
{

}

void StandartRoom::accept(Guest* guest)
{
    busyRoom();
    guest->settle(this);
}

void StandartRoom::orderBreakfast()
{
    std::cout << "The breakfast "
                 "is ordered" << std::endl;
}

void StandartRoom::orderTv()
{
    std::cout << "The TV "
                 "is ordered" << std::endl;
}

