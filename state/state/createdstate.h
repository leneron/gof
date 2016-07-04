#ifndef CREATEDSTATE_H
#define CREATEDSTATE_H

#include "state.h"

class CreatedState: public State
{
public:
    CreatedState();

    void successNextState(Grant* grant) override;
    void failureNextState(Grant* grant) override;
};

#endif // CREATEDSTATE_H
