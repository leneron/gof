#ifndef SELLER_H
#define SELLER_H

#include <string>

//Subject
class Seller
{
public:
    Seller();
    virtual ~Seller();

    //returns the price
    virtual int sellBuilding(std::string newOwner) = 0;
};

#endif // SELLER_H
