#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

class Office;

//Observer
class Subscriber
{
public:
    Subscriber();

    virtual void send(int newIssue) = 0;
    void setOffice(Office* newOffice, int idValue);

protected:
    Office* office;
    int issue;
    int id;
};

#endif // SUBSCRIBER_H
