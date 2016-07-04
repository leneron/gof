#include "rejectedstate.h"
#include "grant.h"

RejectedState::RejectedState()
{

}

void RejectedState::successNextState(Grant* grant)
{
    std::cout << "Your grant is rejected. Try participate again" << std::endl;
}

void RejectedState::failureNextState(Grant* grant)
{
    std::cout << "Your grant is already rejected" << std::endl;
}

