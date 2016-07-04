#ifndef DELAYEDSTATE_H
#define DELAYEDSTATE_H

#include "state.h"

class DelayedState: public State
{
public:
    DelayedState();

    void successNextState(Grant* grant) override;
    void failureNextState(Grant* grant) override;
};

#endif // DELAYEDSTATE_H
