#ifndef STATEPAYMENT_H
#define STATEPAYMENT_H

#include "payment.h"

class StatePayment: public Payment
{
public:
    StatePayment(const std::string& senderValue,
                 const std::string& receiverValue,
                 int moneyAmountValue);
};

#endif // STATEPAYMENT_H
