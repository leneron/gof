#include <iostream>
#include "controlhandler.h"
#include "feehandler.h"
#include "simplepayment.h"
#include "statepayment.h"
#include "preferencialpayment.h"
#include "innerbankpayment.h"

ControlHandler::ControlHandler()
{
    //initialization the variable of the base class
    successor = new FeeHandler;
}

void ControlHandler::handle(Payment* payment)
{
    //if it's a state payment, don't check the sender
    if (payment->getType() == Payment::STATE)
    {
        std::cout << "Payment is state. " << std::endl;
    }
    else
    {
        //check the sender name,
        //the field should not be empty
        if (payment->getSender().empty())
        {
            std::cout << "Sender is unknown. "
                         "Payment is not valid" << std::endl;
            //if empty, finish the transaction
            return;
        }
    }

     //check the receiver name,
     //the field should not be empty
     if (payment->getReceiver().empty())
     {
         std::cout << "Receiver is unknown. "
                      "Payment is not valid" << std::endl;
         //if empty, finish the transaction
         return;
     }
     else
     {
         //if all is ok
         std::cout << "Sender is OK. "
                      "Receiver is OK" << std::endl;

         //success
         //send to the fee handler
         successor->handle(payment);
     }
}

