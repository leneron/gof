#ifndef GRANTORGANIZATION_H
#define GRANTORGANIZATION_H

#include "grant.h"
#include "participant.h"

class GrantOrganization
{
public:
    GrantOrganization();

    Grant* createGrant(Participant* participant);
    void simulateGrant(Grant* grant);
};

#endif // GRANTORGANIZATION_H
