#include <iostream>
#include "deluxeroom.h"
#include "guest.h"

DeluxeRoom::DeluxeRoom()
{

}

void DeluxeRoom::accept(Guest* guest)
{
    busyRoom();
    guest->settle(this);
}

void DeluxeRoom::orderExtraBar()
{
    std::cout << "The extra bar "
                 "is ordered" << std::endl;
}

void DeluxeRoom::orderExtendedBreakfast()
{
    std::cout << "The extended breakfast "
                 "is ordered" << std::endl;
}

