#ifndef CONTROLHANDLER_H
#define CONTROLHANDLER_H

#include "handler.h"

class ControlHandler: public Handler
{
public:
    ControlHandler();

    void handle(Payment* payment) override;
};

#endif // CONTROLHANDLER_H
