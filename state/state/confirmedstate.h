#ifndef CONFIRMEDSTATE_H
#define CONFIRMEDSTATE_H

#include "state.h"

class ConfirmedState: public State
{
public:
    ConfirmedState();

    void successNextState(Grant* grant) override;
    void failureNextState(Grant* grant) override;
};

#endif // CONFIRMEDSTATE_H
