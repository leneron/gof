#include "rusound.h"

RuSound::RuSound()
{

}

RuSound::~RuSound()
{

}

void RuSound::loadSound(const std::string& movieName)
{
    path_ = movieName + "/sound/ru";
}

