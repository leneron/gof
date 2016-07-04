#ifndef TOURIST_H
#define TOURIST_H

#include "guest.h"

//Concrete visitor 1
class Tourist: public Guest
{
public:
    Tourist();

    void settle(DeluxeRoom* room) override;
    void settle(StandartRoom* room) override;
};

#endif // TOURIST_H
