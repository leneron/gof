#ifndef RUSUBTITLES_H
#define RUSUBTITLES_H

#include "subtitles.h"

//Concrete product 2 from concrete factory 2
class RuSubtitles : public Subtitles
{
public:
    RuSubtitles();
    ~RuSubtitles();

    void loadSubtitles(const std::string& movieName) override;
};

#endif // RUSUBTITLES_H
