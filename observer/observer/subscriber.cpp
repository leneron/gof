#include "subscriber.h"
#include "office.h"

Subscriber::Subscriber(): issue(Office::NO_ISSUE)
{

}

void Subscriber::setOffice(Office* newOffice, int idValue)
{
    office = newOffice;
    id = idValue;
}

