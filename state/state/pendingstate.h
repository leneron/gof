#ifndef PENDINGSTATE_H
#define PENDINGSTATE_H

#include "state.h"

class PendingState: public State
{
public:
    PendingState();

    void successNextState(Grant* grant) override;
    void failureNextState(Grant* grant) override;
};

#endif // PENDINGSTATE_H
