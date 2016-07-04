#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include "seller.h"

//Client
class Customer
{
public:
    Customer(std::string nameValue);

    void buyBuilding(Seller* seller);
private:
    std::string name;
};

#endif // CUSTOMER_H
