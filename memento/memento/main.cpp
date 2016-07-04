#include <iostream>
#include "game.h"
#include "caretaker.h"

using namespace std;

int main()
{
    Game game = Game();
    CareTaker careTaker = CareTaker(game.setStateToMemento());

    //info
    cout << "=======INSTRUCTIONS=======" << endl;
    cout << "Write \"move x y\" to set the sign" << endl;
    cout << "Write \"x y\" to correct the mistake" << endl;
    cout << "Write \"undo\" to undo the move" << endl;

    while ((!game.end()) && (game.canMove()))
    {
        //inform the user which the turn is
        cout << game.getCurrentPlayer() << " player's turn: " << endl;
        string command;
        cin >> command;
        while ((command != "move") && (command != "undo"))
        {
            cout << "Try another command" << endl;
            cin >> command;
        }

        //handle the command
        if(command == "move")
        {
            int x, y;
            cin >> x >> y;

            if (!game.canMove(x, y))
            {
                cout << "Try again" << endl;
                continue;
            }

            game.makeMove(x, y);
            game.draw(cout);
            careTaker.add(game.setStateToMemento());
        }
        else if (command == "undo")
        {
            game.setStateFromMemento(careTaker.undo());
            game.draw(cout);
        }
    }

    if(!game.end())
    {
        cout << "Draw!" << endl;
    }
    else
    {
        cout << game.getWinner() << " wons!" << endl;
    }

    return 0;
}

