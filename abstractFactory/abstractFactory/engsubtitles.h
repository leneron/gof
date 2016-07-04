#ifndef ENGSUBTITLES_H
#define ENGSUBTITLES_H

#include "subtitles.h"

//Concrete product 2 from concrete factory 2
class EngSubtitles: public Subtitles
{
public:
    EngSubtitles();
    ~EngSubtitles();

    void loadSubtitles(const std::string& movieName) override;
};

#endif // ENGSUBTITLES_H
