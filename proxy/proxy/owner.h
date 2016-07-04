#ifndef OWNER_H
#define OWNER_H

#include "seller.h"

//The real subject
class Owner : public Seller
{
public:
    Owner();

    const int PRICE = 60000;

    int sellBuilding(std::string newOwner) override;
};

#endif // OWNER_H
