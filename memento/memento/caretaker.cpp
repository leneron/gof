#include "caretaker.h"

CareTaker::CareTaker(Memento* memento)
{
    add(memento);
}

CareTaker::~CareTaker()
{
    for (std::size_t i = 0; i < mementos.size(); i++)
    {
        delete mementos[i];
    }

    mementos.clear();
}

void CareTaker::add(Memento* memento)
{
    mementos.push_back(memento);
}

Memento* CareTaker::undo()
{
    //don't undo if there's less than 2 elements mementos
    if (mementos.size() > 1)
    {
        delete mementos.back();
        mementos.erase(mementos.end() - 1);
        //lastIndex--;
    }
    return mementos.back();
}

