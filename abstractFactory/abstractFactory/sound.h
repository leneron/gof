#ifndef SOUND_H
#define SOUND_H

#include <string>

//Product 1
//the base class for EngSound, RuSound
class Sound
{
public:
    Sound();
    virtual ~Sound();

    virtual void loadSound(const std::string& movieName) = 0;
    std::string path() const;

protected:
    std::string path_;
};

#endif // SOUND_H
