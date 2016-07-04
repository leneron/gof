#include <iostream>
#include "elf.h"
#include "orc.h"
#include "harpy.h"
#include "pegasus.h"
#include "flymagicbehaviour.h"


using namespace std;

int main()
{
    Character* elf = new Elf;
    Character* orc = new Orc;
    Character* harpy = new Harpy;
    Character* pegasus = new Pegasus;

    elf->info();
    elf->walk();
    elf->fly();

    cout << endl;

    orc->info();
    orc->walk();
    orc->fly();

    cout << endl;

    harpy->info();
    harpy->walk();
    harpy->fly();

    cout << endl;

    pegasus->info();
    pegasus->walk();
    pegasus->fly();

    cout << endl;

    //Change behaviour
    FlyBehaviour* flyBehaviour = new FlyMagicBehaviour;
    elf->setFlyBehaviour(flyBehaviour);

    elf->info();
    elf->walk();
    elf->fly();

    delete elf;
    delete orc;
    delete harpy;
    delete pegasus;

    return 0;
}

