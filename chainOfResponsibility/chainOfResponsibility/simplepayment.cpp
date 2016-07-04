#include "simplepayment.h"

SimplePayment::SimplePayment(
        const std::string& senderValue,
        const std::string& receiverValue,
        int moneyAmountValue):
            Payment(senderValue,
                    receiverValue,
                    moneyAmountValue)
{
    type = SIMPLE;
}

