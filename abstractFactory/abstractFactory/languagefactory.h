#ifndef LANGUAGEFACTORY_H
#define LANGUAGEFACTORY_H

#include "subtitles.h"
#include "sound.h"

//Abstract factory
//the abstract class
//the base class for EngLanguageFactory, RuLanguageFactory
class LanguageFactory
{
public:
    LanguageFactory();
    virtual ~LanguageFactory();

    virtual Subtitles* createSubtitles(std::string movieName) = 0;
    virtual Sound* createSound(std::string movieName) = 0;
};

#endif // LANGUAGEFACTORY_H
