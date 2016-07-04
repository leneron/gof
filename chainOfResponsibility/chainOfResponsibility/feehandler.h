#ifndef FEEHANDLER_H
#define FEEHANDLER_H

#include "handler.h"

class FeeHandler: public Handler
{
public:
    FeeHandler();

    void handle(Payment* payment) override;

private:
    const int MIN_MONEY = 1;
    const int MIN_FEE = 10;
    const float PERCENTAGE_FEE = 5.0;
    const int MIN_MONEY_FOR_PERCENTAGE_FEE = 200;
    const float PERCENTAGE_RANGE = 100.0;
};

#endif // FEEHANDLER_H
