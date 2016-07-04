#include "pendingstate.h"
#include "confirmedstate.h"
#include "rejectedstate.h"
#include "grant.h"

PendingState::PendingState()
{

}

void PendingState::successNextState(Grant* grant)
{
    std::cout << "Confirmation" << std::endl;
    State* newState = new ConfirmedState;
    grant->setState(newState);
}

void PendingState::failureNextState(Grant* grant)
{
    std::cout << "Rejection" << std::endl;
    State* newState = new RejectedState;
    grant->setState(newState);
}

