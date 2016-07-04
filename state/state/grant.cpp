#include <iostream>
#include "grant.h"
#include "createdstate.h"

Grant::Grant(Participant* participantValue):
    participant(participantValue)
{
    std::cout << "Grant is successfully created" << std::endl;
    state = new CreatedState;
}

Grant::~Grant()
{
    delete participant;
    delete state;
}

void Grant::setState(State* newState)
{
    delete state;
    state = newState;
}

void Grant::successNextState()
{
    state->successNextState(this);
}

void Grant::failureNextState()
{
    state->failureNextState(this);
}

