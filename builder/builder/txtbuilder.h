#ifndef TXTBUILDER_H
#define TXTBUILDER_H

#include "builder.h"

//Concrete builder 2
class TxtBuilder: public Builder
{
public:
    TxtBuilder();
    ~TxtBuilder();

    void createTitle(const std::string& input) override;
    void createAuthor(const std::string& input)override;
    void createText(const std::string& input) override;
    void createHash(const std::string& input) override;
};

#endif // TXTBUILDER_H
