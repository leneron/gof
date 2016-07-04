#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include "compositionoperand.h"

class Calculator
{
public:
    Calculator();
    ~Calculator();

    void initialize(const std::string &input);

    enum Sign {NUMBER,
               //UNARY_MINUS, UNARY_PLUS,
               MULTIPLICATION, DIVISION,
               PLUS, MINUS,
               OPENING_BRACE, CLOSING_BRACE,
               NOT_SIGN};

    int count();

private:
    Operand* root;

    Sign signType(char c);
    int signPriority(Sign sign);
    int signPriority(char c);

    std::string reversePolishNotation(const std::string& input);
    void constructExpression(const std::string &expression);
};

#endif // CALCULATOR_H
