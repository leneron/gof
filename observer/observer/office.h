#ifndef OFFICE_H
#define OFFICE_H

#include <vector>

class Subscriber;

//Subject
class Office
{
public:
    Office();
    ~Office();
    static const int NO_ISSUE = -1;

    void updatePress();
    void setNewPress(int newIssue);
    void addSubscriber(Subscriber* newSubscriber);

private:
    std::vector<Subscriber*> subscribers;
    int issue;
};

#endif // OFFICE_H
