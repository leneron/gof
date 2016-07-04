#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>

class Handler;

class Payment
{
public:
    Payment(const std::string& senderValue,
            const std::string& receiverValue,
            int moneyAmountValue);

    enum Type {SIMPLE, STATE, PREFERENCIAL, INNERBANK};

    bool getValid() const;
    void setValid(bool value);
    std::string getSender() const;
    std::string getReceiver() const;
    int getMoneyAmount() const;
    void setMoneyAmount(int value);
    Type getType() const;

    std::string info();

    void handle(Handler* handler);

protected:
    std::string sender;
    std::string receiver;
    int moneyAmount;
    Type type;

    //if validation is finished
    bool valid;
};

#endif // PAYMENT_H
