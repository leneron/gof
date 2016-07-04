#include "grantorganization.h"

GrantOrganization::GrantOrganization()
{

}

Grant*GrantOrganization::createGrant(Participant* participant)
{
    return new Grant(participant);
}

void GrantOrganization::simulateGrant(Grant* grant)
{
    //revoking
    grant->failureNextState();
    //pending
    grant->successNextState();
    //confirmation
    grant->successNextState();
    //rejection
    grant->failureNextState();
}

