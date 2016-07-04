#include "revokedstate.h"
#include "pendingstate.h"
#include "rejectedstate.h"
#include "grant.h"

RevokedState::RevokedState()
{

}

void RevokedState::successNextState(Grant* grant)
{
    std::cout << "Pending" << std::endl;
    State* newState = new PendingState;
    grant->setState(newState);
}

void RevokedState::failureNextState(Grant* grant)
{
    std::cout << "Rejection" << std::endl;
    State* newState = new RejectedState;
    grant->setState(newState);
}

