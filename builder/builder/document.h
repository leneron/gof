#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>

//Product
class Document
{
public:
    Document();
    ~Document();

    enum DocumentType {TXT, XML};

    std::string output();

    //Order in document as it is:
    void setTitle(const std::string& value);
    void setAuthor(const std::string& value);
    void setText(const std::string& value);

    void setHash(const std::string& value);
    void setCorrectHash();
    void setType(const DocumentType& value);

    size_t getHash() const;
private:
    std::string title;
    std::string author;
    size_t hash;
    std::string text;
    DocumentType type;
};

#endif // DOCUMENT_H
