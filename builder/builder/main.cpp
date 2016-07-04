#include <iostream>
#include "reader.h"
#include "xmlbuilder.h"
#include "txtbuilder.h"
#include "document.h"

using namespace std;

int main()
{
    Reader* reader = new Reader;
    Builder* builder = new TxtBuilder;

    //setting the article parameters
    //read the title
    cout << "Title" << endl;
    string title;
    cin >> title;
    title += "\n";

    //read the author
    cout << "Author" << endl;
    string author;
    cin >> author;
    author += "\n";

    //read the text
    cout << "Text" << endl;
    string text;
    cin >> text;
    text += "\n";

    //read the hash
    cout << "Hash" << endl;
    string hash;
    cin >> hash;
    hash += "\n";

    string input = title + author + text + hash;

    Document* document = reader->parseInput(input, builder);

    cout << document->output();
    cout << endl << "Hash: " << document->getHash() << endl;

    delete document;
    delete builder;
    delete reader;

    return 0;
}

