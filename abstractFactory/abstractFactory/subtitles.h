#ifndef SUBTITLES_H
#define SUBTITLES_H

#include <string>

//Product 2
//the base class for EngSubtitles, RuSubtitles
class Subtitles
{
public:
    Subtitles();
    virtual ~Subtitles();

    virtual void loadSubtitles(const std::string& movieName) = 0;
    std::string path() const;

protected:
    std::string path_;
};

#endif // SUBTITLES_H
