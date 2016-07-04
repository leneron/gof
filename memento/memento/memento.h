#ifndef MEMENTO_H
#define MEMENTO_H

#include "board.h"

class Memento
{
public:
    Memento(Board& boardValue, int currentPlayerValue);

    void getState(Board& boardValue, int& currentPlayerValue);

private:
    Board board;
    int currentPlayer;
    friend class Originator;
};

#endif // MEMENTO_H
