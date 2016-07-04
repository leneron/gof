#ifndef ENGLANGUAGEFACTORY_H
#define ENGLANGUAGEFACTORY_H

#include "languagefactory.h"

//Concrete factory 1
class EngLanguageFactory: public LanguageFactory
{
public:
    EngLanguageFactory();
    ~EngLanguageFactory();

    Subtitles* createSubtitles(std::string movieName) override;
    Sound* createSound(std::string movieName) override;
};

#endif // ENGLANGUAGEFACTORY_H
