#include "payment.h"
#include "handler.h"

Payment::Payment(const std::string& senderValue,
                 const std::string& receiverValue,
                 int moneyAmountValue):
                sender(senderValue),
                receiver(receiverValue),
                moneyAmount(moneyAmountValue),
                valid(false)
{
    type = SIMPLE;
}

bool Payment::getValid() const
{
    return valid;
}

void Payment::setValid(bool value)
{
    valid = value;
}

std::string Payment::getSender() const
{
    return sender;
}

std::string Payment::getReceiver() const
{
    return receiver;
}

int Payment::getMoneyAmount() const
{
    return moneyAmount;
}

void Payment::setMoneyAmount(int value)
{
    moneyAmount = value;
}

Payment::Type Payment::getType() const
{
    return type;
}

std::string Payment::info()
{
    std::string info;
    info = "Sender: " + sender + "\n";
    info += "Receiver: " + receiver + "\n" ;
    info += "Money: " + std::to_string(moneyAmount) + "\n";
    if (valid)
    {
        info += "Valid: true";
    }
    else
    {
        info += "Valid: false";
    }
    return info;
}

void Payment::handle(Handler* handler)
{
    handler->handle(this);
}




