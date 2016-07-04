#ifndef HANDLER_H
#define HANDLER_H

#include "payment.h"

class Payment;

class Handler
{
public:
    Handler();
    ~Handler();

    virtual void handle(Payment* payment);

protected:
    Handler* successor;
};

#endif // HANDLER_H
