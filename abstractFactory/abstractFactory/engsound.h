#ifndef ENGSOUND_H
#define ENGSOUND_H

#include "sound.h"

//Concrete product 1 from concrete factory 2
class EngSound: public Sound
{
public:
    EngSound();
    ~EngSound();

    void loadSound(const std::string& movieName) override;
};

#endif // ENGSOUND_H
