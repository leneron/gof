#include <iostream>
#include "businessman.h"

Businessman::Businessman()
{

}

void Businessman::settle(DeluxeRoom* room)
{
    std::cout << std::endl;
    std::cout << "Businessman : De Luxe" << std::endl;
    room->orderExtendedBreakfast();
}

void Businessman::settle(StandartRoom* room)
{
    std::cout << std::endl;
    std::cout << "Businessman : Standart" << std::endl;
    room->orderBreakfast();
    room->orderTv();
}

