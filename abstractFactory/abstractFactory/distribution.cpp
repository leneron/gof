#include "distribution.h"
#include "languagefactory.h"
#include "englanguagefactory.h"
#include "rulanguagefactory.h"

Distribution::Distribution()
{

}

Distribution::~Distribution()
{

}

Movie*Distribution::loadMovie(const std::string& movieName, const Distribution::LanguageType& languageType)
{
    //defining the languageFactory
    LanguageFactory* languageFactory;
    switch(languageType)
    {
        case RU:
            languageFactory = new RuLanguageFactory;
        break;
        //in case if we haven't such a language
        default:
            languageFactory = new EngLanguageFactory;
        break;
    }

    //result
    Movie* movie = new Movie(movieName, languageFactory);
    return movie;
}

