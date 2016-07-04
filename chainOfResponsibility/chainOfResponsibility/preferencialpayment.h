#ifndef PREFERENCIALPAYMENT_H
#define PREFERENCIALPAYMENT_H

#include "payment.h"

class PreferencialPayment: public Payment
{
public:
    PreferencialPayment(const std::string& senderValue,
                        const std::string& receiverValue,
                        int moneyAmountValue);
};

#endif // PREFERENCIALPAYMENT_H
