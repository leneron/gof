#include "realtor.h"

Realtor::Realtor()
{
    owner = new Owner();
}

Realtor::~Realtor()
{
    delete owner;
}

int Realtor::sellBuilding(std::string newOwner)
{
    return (owner->sellBuilding(newOwner) + COMISSION);
}

