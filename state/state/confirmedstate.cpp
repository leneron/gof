#include "confirmedstate.h"
#include "rejectedstate.h"
#include "grant.h"

ConfirmedState::ConfirmedState()
{

}

void ConfirmedState::successNextState(Grant* grant)
{
    std::cout << "Grant is already confirmed" << std::endl;
}

void ConfirmedState::failureNextState(Grant* grant)
{
    std::cout << "Grant was confirmed before. Impossible to reject" << std::endl;
}

