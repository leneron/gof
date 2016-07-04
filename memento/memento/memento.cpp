#include "memento.h"


Memento::Memento(Board& boardValue, int currentPlayerValue):
    board(boardValue), currentPlayer(currentPlayerValue)
{

}

void Memento::getState(Board& boardValue, int& currentPlayerValue)
{
    boardValue = board;
    currentPlayerValue = currentPlayer;
}
