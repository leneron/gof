#ifndef XMLBUILDER_H
#define XMLBUILDER_H

#include "builder.h"

//Concrete builder 1
class XmlBuilder : public Builder
{
public:
    XmlBuilder();
    ~XmlBuilder();

    void createTitle(const std::string& input) override;
    void createAuthor(const std::string& input)override;
    void createText(const std::string& input) override;
    void createHash(const std::string& input) override;
};

#endif // XMLBUILDER_H
