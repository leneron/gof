#ifndef ELF_H
#define ELF_H

#include "character.h"

//Type of character, inits its default behaviour in constructor
class Elf: public Character
{
public:
    Elf();
    ~Elf();

    void info() override;
};

#endif // ELF_H
