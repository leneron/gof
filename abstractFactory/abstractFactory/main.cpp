#include <iostream>
#include <string>
#include "distribution.h"
#include "rulanguagefactory.h"

int main()
{
    Distribution distribution = Distribution();

    //
    std::cout << "Movie: " << std::endl;
    std::string movieName;
    std::cin >> movieName;

    std::cout << "Language(ENG/RU): " << std::endl;
    std::string language;
    std::cin >> language;

    Distribution::LanguageType languageType;

    if(language == "RU")
        languageType = Distribution::RU;
    else
        languageType = Distribution::ENG;

    Movie* movie = distribution.loadMovie(movieName, languageType);

    //display current properties
    std::cout << movie->info();

    LanguageFactory* languageFactory = new RuLanguageFactory();
    languageFactory->createSound(movie->movieName());
    languageFactory->createSubtitles(movie->movieName());

    movie->changeLanguage(languageFactory);

    //display new properties
    std::cout << std::endl;
    std::cout << movie->info();

    return 0;
}

