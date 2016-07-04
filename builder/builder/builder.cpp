#include "builder.h"

Builder::Builder()
{
    document = new Document;
}

Builder::~Builder()
{

}

Document*Builder::getDocument()
{
    return document;
}

void Builder::createCorrectHash()
{
    document->setCorrectHash();
}

