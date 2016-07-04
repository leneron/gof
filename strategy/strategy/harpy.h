#ifndef HARPY_H
#define HARPY_H

#include "character.h"

//Type of character, inits its default behaviour in constructor
class Harpy: public Character
{
public:
    Harpy();
    ~Harpy();

    void info() override;
};

#endif // HARPY_H
