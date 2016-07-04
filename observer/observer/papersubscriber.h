#ifndef PAPERSUBSCRIBER_H
#define PAPERSUBSCRIBER_H

#include "subscriber.h"

class PaperSubscriber: public Subscriber
{
public:
    PaperSubscriber();

    void send(int newIssue) override;
};

#endif // PAPERSUBSCRIBER_H
