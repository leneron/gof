#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <string>

class Participant
{
public:
    Participant(const std::string& nameValue);
    ~Participant();

private:
    std::string name;
};

#endif // PARTICIPANT_H
