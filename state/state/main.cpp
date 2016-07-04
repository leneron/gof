#include <iostream>
#include "grantorganization.h"

using namespace std;

int main()
{
    GrantOrganization organization = GrantOrganization();
    Participant* participant;
    //creating the client
    Grant* grant = organization.createGrant(participant);
    //simulation the process of getting the grant
    organization.simulateGrant(grant);
    return 0;
}

