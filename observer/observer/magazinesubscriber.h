#ifndef MAGAZINESUBSCRIBER_H
#define MAGAZINESUBSCRIBER_H

#include "subscriber.h"

class MagazineSubscriber: public Subscriber
{
public:
    MagazineSubscriber();

    void send(int newIssue) override;
};

#endif // MAGAZINESUBSCRIBER_H
