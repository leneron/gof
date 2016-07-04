#ifndef BUSINESSMAN_H
#define BUSINESSMAN_H

#include "guest.h"

//Concrete visitor 2
class Businessman: public Guest
{
public:
    Businessman();

    void settle(DeluxeRoom* room) override;
    void settle(StandartRoom* room) override;
};

#endif // BUSINESSMAN_H
