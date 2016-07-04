#include <iostream>
#include "tourist.h"

Tourist::Tourist()
{

}

void Tourist::settle(DeluxeRoom* room)
{
    std::cout << std::endl;
    std::cout << "Tourist : De Luxe" << std::endl;
    room->orderExtraBar();
}

void Tourist::settle(StandartRoom* room)
{
    std::cout << std::endl;
    std::cout << "Tourist : Standart" << std::endl;
    room->orderBreakfast();
    room->orderTv();
}

