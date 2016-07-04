#include <iostream>
#include "registerhandler.h"
#include "controlhandler.h"

RegisterHandler::RegisterHandler()
{
    //initialization the variable of the base class
    successor = new ControlHandler;
}

void RegisterHandler::handle(Payment* payment)
{
    std::cout << "Payment is registered" << std::endl;
    //send to the control handler
    successor->handle(payment);
}

