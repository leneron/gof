#ifndef STATE_H
#define STATE_H

#include <iostream>
class Grant;

class State
{
public:
    State();

    virtual void successNextState(Grant* grant);
    virtual void failureNextState(Grant* grant);
};

#endif // STATE_H
