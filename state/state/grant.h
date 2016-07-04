#ifndef GRANT_H
#define GRANT_H

#include "participant.h"

class State;

class Grant
{
public:
    Grant(Participant* participantValue);
    ~Grant();

    void setState(State* newState);
    void successNextState();
    void failureNextState();

private:
    Participant* participant;
    State* state;
};

#endif // GRANT_H
