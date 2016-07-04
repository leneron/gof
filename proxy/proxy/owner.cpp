#include <iostream>
#include "owner.h"

Owner::Owner()
{

}

int Owner::sellBuilding(std::string newOwner)
{
    std::cout << "New owner : " + newOwner << std::endl;
    return PRICE;
}

