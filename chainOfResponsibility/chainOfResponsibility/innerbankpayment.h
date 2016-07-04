#ifndef INNERBANKPAYMENT_H
#define INNERBANKPAYMENT_H

#include "payment.h"

class InnerBankPayment: public Payment
{
public:
    InnerBankPayment(const std::string& senderValue,
                     const std::string& receiverValue,
                     int moneyAmountValue);
};

#endif // INNERBANKPAYMENT_H
