#ifndef DISTRIBUTION_H
#define DISTRIBUTION_H

#include "movie.h"

//Service
//that returns a movie with parameters
class Distribution
{
public:
    Distribution();
    ~Distribution();

    enum LanguageType {ENG, RU};

    //loading the movie with the parameters given by user
    Movie* loadMovie(const std::string& movieName,
                     const LanguageType& languageType);
};

#endif // DISTRIBUTION_H
