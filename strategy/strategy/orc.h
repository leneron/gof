#ifndef ORC_H
#define ORC_H

#include "character.h"

//Type of character, inits its default behaviour in constructor
class Orc : public Character
{
public:
    Orc();
    ~Orc();

    void info() override;
};

#endif // ORC_H
