#ifndef SIMPLEPAYMENT_H
#define SIMPLEPAYMENT_H

#include "payment.h"

class SimplePayment: public Payment
{
public:
    SimplePayment(const std::string& senderValue,
                  const std::string& receiverValue,
                  int moneyAmountValue);
};

#endif // SIMPLEPAYMENT_H
