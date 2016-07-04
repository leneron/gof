#ifndef CARETAKER_H
#define CARETAKER_H

#include <vector>
#include "memento.h"

class CareTaker
{
public:
    //there's always >= 1 element
    //first element is an initial state
    CareTaker(Memento* memento);
    ~CareTaker();

    void add (Memento* memento);
    Memento* undo();

private:
    std::vector<Memento*> mementos;

};

#endif // CARETAKER_H
