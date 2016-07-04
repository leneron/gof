#ifndef PEGASUS_H
#define PEGASUS_H

#include "character.h"

//Type of character, inits its default behaviour in constructor
class Pegasus: public Character
{
public:
    Pegasus();
    ~Pegasus();

    void info() override;
};

#endif // PEGASUS_H
