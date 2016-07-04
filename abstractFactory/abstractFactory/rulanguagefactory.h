#ifndef RULANGUAGEFACTORY_H
#define RULANGUAGEFACTORY_H

#include "languagefactory.h"

//Concrete factory 2
class RuLanguageFactory: public LanguageFactory
{
public:
    RuLanguageFactory();
    ~RuLanguageFactory();

    Subtitles* createSubtitles(std::string movieName) override;
    Sound* createSound(std::string movieName) override;
};

#endif // RULANGUAGEFACTORY_H
