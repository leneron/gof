#include "movie.h"

Movie::Movie(std::string movieName, LanguageFactory* languageFactory):
    movieName_(movieName), languageFactory_(languageFactory)
{
    sound_ = languageFactory_->createSound(movieName);
    subtitles_ = languageFactory_->createSubtitles(movieName);
}

Movie::~Movie()
{
    delete languageFactory_;
    delete sound_;
    delete subtitles_;
}

void Movie::changeLanguage(LanguageFactory* newLanguageFactory)
{
    //clears data
    delete languageFactory_;
    delete sound_;
    delete subtitles_;

    //setting the new data
    languageFactory_ = newLanguageFactory;
    sound_ = languageFactory_->createSound(movieName_);
    subtitles_ = languageFactory_->createSubtitles(movieName_);
}

std::string Movie::info()
{
    //displays the inner information about the movie
    std::string info = "Movie: " + movieName_ + "\n";
    info += "Sound: " + sound_->path() + "\n";
    info += "Subtitles: " + subtitles_->path() + "\n";
    return info;
}
std::string Movie::movieName() const
{
    return movieName_;
}




