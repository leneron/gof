#ifndef FINISHHANDLER_H
#define FINISHHANDLER_H

#include "handler.h"

class FinishHandler: public Handler
{
public:
    FinishHandler();

    void handle(Payment* payment) override;
};

#endif // FINISHHANDLER_H
