#include <iostream>
#include "papersubscriber.h"

PaperSubscriber::PaperSubscriber()
{

}

void PaperSubscriber::send(int newIssue)
{
    issue = newIssue;
    std::cout << "Subscriber #" << id
              << " received 'Paper' #" << issue
              << std::endl;
}

