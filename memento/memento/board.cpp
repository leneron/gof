#include <iomanip>
#include "board.h"

Board::Board(const Board& boardValue):
            cells(boardValue.getCells())
{

}

Board::Board(const std::vector<std::vector<Board::Sign> >& cellsValue):
    cells(cellsValue)
{

}

Board::Board()
{
    std::vector<Sign> empty;
    empty.resize(3, EMPTY);
    cells.resize(3, empty);
}

std::vector<std::vector<Board::Sign>> Board::getCells() const
{
    return cells;
}

void Board::setCell(int x, int y, int currentPlayer)
{
    Sign sign = Sign(currentPlayer % 2);
    cells[x][y] = sign;
}

bool Board::isEmpty(int x, int y)
{
    if (cells[x][y] == EMPTY)
    {
        return true;
    }
    return false;
}

bool Board::isOnBoard(int x, int y)
{
    if ((y < (cells.size())) && (x < cells[y].size()))
    {
        return true;
    }
    return false;
}

std::ostream& operator<<(std::ostream& stream, const Board& board)
{
    std::vector<std::vector<Board::Sign>> cells = board.getCells();
    stream << std::endl;
    for (std::size_t i = 0 ; i < cells.size(); i++)
    {
        for (std::size_t j = 0 ; j < cells.size(); j++)
        {
            switch(cells[i][j])
            {
                case Board::X:
                {
                    stream << std::setw(2) << "X";
                    break;
                }
                case Board::O:
                {
                    stream << std::setw(2) << "O";
                    break;
                }
                default:
                {
                    stream << std::setw(2) << ".";
                }
            }
        }
        stream << std::endl << std::endl;
    }
}


