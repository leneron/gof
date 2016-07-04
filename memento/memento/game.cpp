#include <ostream>
#include "game.h"

Game::Game()
{
    currentPlayer = Board::X;
    board = Board();
}

void Game::setStateFromMemento(Memento* memento)
{
    memento->getState(board, currentPlayer);
}

Memento*Game::setStateToMemento()
{
    return new Memento(board, currentPlayer);
}

void Game::makeMove(int x, int y)
{
    board.setCell(x, y, (Board::Sign)currentPlayer);
    changeCurrentPlayer();
}

int Game::getCurrentPlayer() const
{
    return currentPlayer;
}

bool Game::end()
{
    std::vector<std::vector<Board::Sign>> cells = board.getCells();

    //check rows
    bool crossed = false;
    if (!crossed)
    {
        for (std::size_t i = 0; i < cells.size(); i++)
        {
            crossed = true;
            for(std::size_t j = 0; j < cells[i].size() - 1; j++)
            {
                if((cells[i][j] != cells[i][j + 1]) || (cells[i][j] == Board::EMPTY))
                {
                    crossed = false;
                }
            }
            if (crossed)
                return true;
        }
    }

    if (!crossed)
    {
        //check columns
        for (std::size_t j = 0; j < cells.size(); j++)
        {
            crossed = true;
            for(std::size_t i = 0; i < cells[i].size() - 1; i++)
            {
                if((cells[i][j] != cells[i + 1][j]) || (cells[i][j] == Board::EMPTY))
                {
                    crossed = false;
                }
            }
            if (crossed)
            {
                return true;
            }
        }
    }

    if (!crossed)
    {
        //check main diagonal
        for (std::size_t i = 0; i < cells.size() - 1; i++)
        {
            crossed = true;
            if((cells[i][i] != cells[i + 1][i + 1]) || (cells[i][i] == Board::EMPTY))
            {
                crossed = false;
            }
        }
        if (crossed)
        {
            return true;
        }
    }

    if (!crossed)
    {
        //check opposite diagonal
        for (std::size_t i = 0; i < cells.size() - 1; i++)
        {
            crossed = true;
            if((cells[i][cells[i].size() - i] != cells[i + 1][cells[i].size() - (i + 1)])
                    || (cells[i][cells[i].size() - i] == Board::EMPTY))
            {
                crossed = false;
            }
        }
        if (crossed)
        {
            return true;
        }
    }

    if (!crossed)
    {
        return false;
    }
}

void Game::draw(std::ostream& stream)
{
    stream << board;
}

bool Game::canMove(int x, int y)
{
    if ((board.isOnBoard(x, y)) && (board.isEmpty(x, y)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Game::canMove()
{
    std::vector<std::vector<Board::Sign>> cells = board.getCells();
    for (std::size_t i = 0; i < cells.size(); i++)
    {
        for(std::size_t j = 0; j < cells[i].size(); j++)
        {
            if(board.isEmpty(i, j))
            {
                return true;
            }
        }
    }
    return false;
}

std::string Game::getWinner()
{
    int winner = (currentPlayer + 1) % 2;
    switch (winner)
    {
        case Board::X:
        {
            return "X Player";
            break;
        }
        case Board::O:
        {
            return "O Player";
            break;
        }
    }
}

void Game::changeCurrentPlayer()
{
    currentPlayer = (currentPlayer + 1) % 2;
}


