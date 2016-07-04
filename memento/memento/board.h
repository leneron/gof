#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <ostream>

class Board
{
public:
    enum Sign{X, O, EMPTY};

    Board(const std::vector<std::vector<Sign>>& cellsValue);
    Board(const Board& boardValue);
    Board();

    std::vector<std::vector<Sign>> getCells() const;
    void setCell(int x, int y, int currentPlayer);

    bool isEmpty(int x, int y);
    bool isOnBoard(int x, int y);

private:
    std::vector<std::vector<Sign>> cells;
};

std::ostream& operator<<(std::ostream& stream, const Board& board);

#endif // BOARD_H
