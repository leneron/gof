#include <iostream>
#include "magazinesubscriber.h"

MagazineSubscriber::MagazineSubscriber()
{

}

void MagazineSubscriber::send(int newIssue)
{
    issue = newIssue;
    std::cout << "Subscriber #" << id
              << " received 'Magazine' #" << issue
              << std::endl;
}

