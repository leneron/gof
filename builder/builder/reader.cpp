#include <sstream>
#include "reader.h"

Reader::Reader()
{

}

Reader::~Reader()
{

}

Document*Reader::parseInput(const std::string& input, Builder* newBuilder)
{
    //for parsing by the lines
    std::istringstream streamInput(input);
    std::string line;

    try
    {
        //creating a title
        getline(streamInput, line);
        newBuilder->createTitle(line);

        //creating an author
        getline(streamInput, line);
        newBuilder->createAuthor(line);

        //creating a text
        getline(streamInput, line);
        newBuilder->createText(line);

        //creating a hash
        getline(streamInput, line);
        newBuilder->createHash(line);
    }
    catch( ... )
    {
        //Default parameters are
        //in the constructor of the class Document
    }

    newBuilder->createCorrectHash();

    return newBuilder->getDocument();
}

void Reader::setCorrectHash()
{

}

