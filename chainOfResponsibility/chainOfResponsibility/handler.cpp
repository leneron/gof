#include "handler.h"

Handler::Handler()
{
    //we'll init successor by the real value
    //in each of derived class
    successor = nullptr;
}

Handler::~Handler()
{
    if (successor)
        delete successor;
}

void Handler::handle(Payment* payment)
{

}

