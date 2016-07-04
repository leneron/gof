#include "xmlbuilder.h"

XmlBuilder::XmlBuilder()
{
    document->setType(Document::XML);
}

XmlBuilder::~XmlBuilder()
{

}

void XmlBuilder::createTitle(const std::string& input)
{
    document->setTitle("<?xml version=\"1.0\"?>\n<ARTICLE>\n<TITLE>\n" + input + "\n</TITLE>\n");
}

void XmlBuilder::createAuthor(const std::string& input)
{
    document->setAuthor("<AUTHOR>\n" + input + "\n</AUTHOR>\n");
}

void XmlBuilder::createHash(const std::string& input)
{
    document->setHash(input);
}

void XmlBuilder::createText(const std::string& input)
{
    document->setText("<TEXT>\n" + input + "\n</TEXT>\n</ARTICLE>");
}

