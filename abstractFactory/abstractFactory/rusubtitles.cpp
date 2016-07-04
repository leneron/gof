#include "rusubtitles.h"

RuSubtitles::RuSubtitles()
{

}

RuSubtitles::~RuSubtitles()
{

}

void RuSubtitles::loadSubtitles(const std::string& movieName)
{
    path_ = movieName + "/subtitles/ru";
}

