#ifndef REVOKEDSTATE_H
#define REVOKEDSTATE_H

#include "state.h"

class RevokedState: public State
{
public:
    RevokedState();

    void successNextState(Grant* grant) override;
    void failureNextState(Grant* grant) override;
};

#endif // REVOKEDSTATE_H
