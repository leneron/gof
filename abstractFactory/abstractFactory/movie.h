#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include "languagefactory.h"

//Client
//Сlient of the abstract factory LanguageFactory
class Movie
{
public:
    Movie(std::string movieName,
          LanguageFactory* languageFactory);
    ~Movie();

    void changeLanguage(LanguageFactory* newLanguageFactory);

    std::string info();
    std::string movieName() const;

private:
    LanguageFactory* languageFactory_;

    //properties
    std::string movieName_;
    Sound* sound_;
    Subtitles* subtitles_;
};

#endif // MOVIE_H
