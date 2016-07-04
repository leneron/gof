#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
    Calculator calculator;
    string input = "";
    while (input != "EXIT")
    {
        cout << "Write correct expression using positive numbers and 0, "
                "braces and binary operators +, -, *, /" << endl;
        cout << "Or EXIT if you want to finish the program" << endl;
        cout << "-----------------------------------------" << endl;

        std::getline(cin, input);
        calculator.initialize(input);

        cout << calculator.count() << endl;
    }
    return 0;
}

