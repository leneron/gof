#ifndef BUILDER_H
#define BUILDER_H

#include "document.h"

//Abstract builder
class Builder
{
public:
    Builder();
    virtual ~Builder();

    virtual void createTitle(const std::string& input) = 0;
    virtual void createAuthor(const std::string& input) = 0;
    virtual void createText(const std::string& input) = 0;
    virtual void createHash(const std::string& input) = 0;
    Document* getDocument();
    void createCorrectHash();

protected:
    Document* document;
};

#endif // BUILDER_H
