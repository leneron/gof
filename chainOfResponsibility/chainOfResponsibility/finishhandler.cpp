#include <iostream>
#include "finishhandler.h"

FinishHandler::FinishHandler()
{

}

void FinishHandler::handle(Payment* payment)
{
    payment->setValid(true);
    std::cout << "Transaction is finished. Info: " << std::endl;
    std::cout << payment->info();
}

