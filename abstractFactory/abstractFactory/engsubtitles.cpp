#include "engsubtitles.h"

EngSubtitles::EngSubtitles()
{

}

EngSubtitles::~EngSubtitles()
{

}

void EngSubtitles::loadSubtitles(const std::string& movieName)
{
    path_ = movieName + "/subtitles/eng";
}

