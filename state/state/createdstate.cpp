#include "createdstate.h"
#include "grant.h"
#include "pendingstate.h"
#include "delayedstate.h"

CreatedState::CreatedState()
{

}

void CreatedState::successNextState(Grant* grant)
{
    std::cout << "Pending" << std::endl;
    State* newState = new PendingState;
    grant->setState(newState);
}

void CreatedState::failureNextState(Grant* grant)
{
    std::cout << "Delay" << std::endl;
    State* newState = new DelayedState;
    grant->setState(newState);
}

