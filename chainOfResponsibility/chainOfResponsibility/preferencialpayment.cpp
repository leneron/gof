#include "preferencialpayment.h"

PreferencialPayment::PreferencialPayment(
        const std::string& senderValue,
        const std::string& receiverValue,
        int moneyAmountValue):
            Payment(senderValue,
                    receiverValue,
                    moneyAmountValue)
{
    type = PREFERENCIAL;
}

