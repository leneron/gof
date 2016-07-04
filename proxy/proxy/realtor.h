#ifndef REALTOR_H
#define REALTOR_H

#include "owner.h"

class Realtor: public Seller
{
public:
    Realtor();
    ~Realtor();

    const int COMISSION = 5000;

    int sellBuilding(std::string newOwner) override;
private:
    Owner* owner;
};

#endif // REALTOR_H
