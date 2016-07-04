#include "engsound.h"

EngSound::EngSound()
{

}

EngSound::~EngSound()
{

}

void EngSound::loadSound(const std::string& movieName)
{
    path_ = movieName + "/sound/eng";
}

