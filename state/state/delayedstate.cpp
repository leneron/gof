#include "delayedstate.h"
#include "pendingstate.h"
#include "rejectedstate.h"
#include "grant.h"

DelayedState::DelayedState()
{

}

void DelayedState::successNextState(Grant* grant)
{
    std::cout << "Pending" << std::endl;
    State* newState = new PendingState;
    grant->setState(newState);
}

void DelayedState::failureNextState(Grant* grant)
{
    std::cout << "Rejection" << std::endl;
    State* newState = new RejectedState;
    grant->setState(newState);
}
