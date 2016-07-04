#include "office.h"
#include "subscriber.h"

Office::Office(): issue(-1)
{

}

Office::~Office()
{
    for(std::size_t i = 0; i < subscribers.size(); i++)
    {
        delete subscribers[i];
    }
    subscribers.clear();
}

void Office::updatePress()
{
    for(std::size_t i = 0; i < subscribers.size(); i++)
    {
        subscribers[i]->send(issue);
    }
}

void Office::setNewPress(int newIssue)
{
    issue = newIssue;
}

void Office::addSubscriber(Subscriber* newSubscriber)
{
    int id = subscribers.size();
    newSubscriber->setOffice(this, id);
    subscribers.push_back(newSubscriber);
}

