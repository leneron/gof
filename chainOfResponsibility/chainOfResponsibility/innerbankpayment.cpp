#include "innerbankpayment.h"

InnerBankPayment::InnerBankPayment(
        const std::string& senderValue,
        const std::string& receiverValue,
        int moneyAmountValue):
            Payment(senderValue,
                    receiverValue,
                    moneyAmountValue)
{
    type = INNERBANK;
}

