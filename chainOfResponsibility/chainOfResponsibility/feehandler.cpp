#include <iostream>
#include "feehandler.h"
#include "finishhandler.h"
#include "statepayment.h"
#include "innerbankpayment.h"

FeeHandler::FeeHandler()
{
    //initialization the variable of the base class
    successor = new FinishHandler;
}

void FeeHandler::handle(Payment* payment)
{
    //general check
    if (payment->getMoneyAmount() < 0)
    {
        std::cout << "Money amount value is wrong. "
                     "Payment is not valid" << std::endl;
        return;
    }
    else
    {
        //if it's a state payment
        if ((payment->getType() == Payment::STATE)
          ||(payment->getType() == Payment::INNERBANK))
        {
            std::cout << "No fee" << std::endl;

            //if all is ok
            successor->handle(payment);
        }
        else
        {
            //checking if money is enough
            if (payment->getMoneyAmount() < (MIN_MONEY + MIN_FEE))
            {
                std::cout << "Money isn't enough. "
                             "Payment is not valid" << std::endl;
                return;
            }
            else
            {
                //if money is enough for percentage fee
                if (payment->getMoneyAmount() < MIN_MONEY_FOR_PERCENTAGE_FEE)
                {
                    int newMoneyValue = payment->getMoneyAmount() - MIN_FEE;
                    payment->setMoneyAmount(newMoneyValue);
                    std::cout << "Fee was " <<  MIN_FEE << std::endl;
                }
                else
                {
                    float percentagePart = 1.0 - (PERCENTAGE_FEE/PERCENTAGE_RANGE);
                    float newMoneyValue = ((float)payment->getMoneyAmount() * percentagePart);
                    payment->setMoneyAmount((int)newMoneyValue);
                    std::cout << "Fee was " <<  PERCENTAGE_FEE << "%" << std::endl;
                }

                //if all is ok, send to finish handler
                successor->handle(payment);
            }
        }
    }
}

