#ifndef RUSOUND_H
#define RUSOUND_H

#include "sound.h"

//Concrete product 1 from concrete factory 2
class RuSound: public Sound
{
public:
    RuSound();
    ~RuSound();

    void loadSound(const std::string& movieName) override;
};

#endif // RUSOUND_H
