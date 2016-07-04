#include <functional>
#include "document.h"

Document::Document()
{
    title = "Default title";
    author = "Default author";
    text = "Default text";

    std::hash<std::string> hashFunction;
    hash = hashFunction(text);
}

Document::~Document()
{

}

std::string Document::output()
{
    std::string result;

    result = title + author + text;
    return result;
}

void Document::setTitle(const std::string& value)
{
    title = value;
}

void Document::setAuthor(const std::string& value)
{
    author = value;
}

void Document::setHash(const std::string& value)
{
    try
    {
        hash = size_t(std::stoul(value));
    }
    catch ( ... )
    {
        hash = 0;
    }
}

void Document::setText(const std::string& value)
{
    text = value;
}

void Document::setCorrectHash()
{
    std::hash<std::string> hashFunction;
    hash = hashFunction(text);
}
void Document::setType(const DocumentType& value)
{
    type = value;
}
size_t Document::getHash() const
{
    return hash;
}







