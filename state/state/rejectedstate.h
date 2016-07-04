#ifndef RejectedSTATE_H
#define RejectedSTATE_H

#include "state.h"

class RejectedState: public State
{
public:
    RejectedState();

    void successNextState(Grant* grant) override;
    void failureNextState(Grant* grant) override;
};

#endif // RejectedSTATE_H
