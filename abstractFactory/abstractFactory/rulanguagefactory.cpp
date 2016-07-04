#include "rulanguagefactory.h"
#include "rusound.h"
#include "rusubtitles.h"

RuLanguageFactory::RuLanguageFactory()
{

}

RuLanguageFactory::~RuLanguageFactory()
{

}

Subtitles* RuLanguageFactory::createSubtitles(std::string movieName)
{
    Subtitles* subtitles = new RuSubtitles;
    subtitles->loadSubtitles(movieName);
    return subtitles;
}

Sound* RuLanguageFactory::createSound(std::string movieName)
{
    Sound* sound = new RuSound;
    sound->loadSound(movieName);
    return sound;
}
