#ifndef REGISTERHANDLER_H
#define REGISTERHANDLER_H

#include "handler.h"

class RegisterHandler: public Handler
{
public:
    RegisterHandler();

    void handle(Payment* payment) override;
};

#endif // REGISTERHANDLER_H
