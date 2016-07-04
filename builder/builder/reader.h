#ifndef READER_H
#define READER_H

#include "document.h"
#include "builder.h"

//Director
class Reader
{
public:
    Reader();
    ~Reader();

    Document* parseInput(const std::string& input, Builder* newBuilder);

private:
    void setCorrectHash();
};

#endif // READER_H
