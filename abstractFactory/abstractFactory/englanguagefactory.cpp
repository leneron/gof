#include "englanguagefactory.h"
#include "engsound.h"
#include "engsubtitles.h"

EngLanguageFactory::EngLanguageFactory()
{

}

EngLanguageFactory::~EngLanguageFactory()
{

}

Subtitles* EngLanguageFactory::createSubtitles(std::string movieName)
{
    Subtitles* subtitles = new EngSubtitles;
    subtitles->loadSubtitles(movieName);
    return subtitles;
}

Sound* EngLanguageFactory::createSound(std::string movieName)
{
    Sound* sound = new EngSound;
    sound->loadSound(movieName);
    return sound;
}

