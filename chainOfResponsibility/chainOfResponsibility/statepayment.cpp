#include "statepayment.h"

StatePayment::StatePayment(
        const std::string& senderValue,
        const std::string& receiverValue,
        int moneyAmountValue):
            Payment(senderValue,
                    receiverValue,
                    moneyAmountValue)
{
    type = STATE;
}

