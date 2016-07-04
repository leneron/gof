#include "iostream"
#include "customer.h"

Customer::Customer(std::string nameValue):
                    name(nameValue)
{

}

void Customer::buyBuilding(Seller* seller)
{
    int totalcost = seller->sellBuilding(name);
    std::cout << "You spent $" << totalcost
              << std::endl;
}

