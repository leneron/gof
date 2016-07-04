#include "txtbuilder.h"

TxtBuilder::TxtBuilder()
{
    document->setType(Document::TXT);
}

TxtBuilder::~TxtBuilder()
{

}

void TxtBuilder::createTitle(const std::string& input)
{
    document->setTitle(input + "/n");
}

void TxtBuilder::createAuthor(const std::string& input)
{
    document->setAuthor(input + "/n");
}

void TxtBuilder::createHash(const std::string& input)
{
    document->setHash(input);
}

void TxtBuilder::createText(const std::string& input)
{
    document->setText(input + "/n");
}

