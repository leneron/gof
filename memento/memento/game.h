#ifndef GAME_H
#define GAME_H

#include "board.h"
#include "memento.h"

class Game
{
public:
    Game();

    void setStateFromMemento(Memento* memento);
    Memento* setStateToMemento();
    void makeMove(int x, int y);
    int getCurrentPlayer() const;
    bool end();
    void draw(std::ostream& stream);
    bool canMove(int x, int y);
    bool canMove();

    std::string getWinner();

private:
    Board board;
    int currentPlayer;

    void changeCurrentPlayer();
};

#endif // GAME_H
