#include "calculator.h"
#include <stack>
#include <string>

Calculator::Calculator()
{
    root = nullptr;
}

Calculator::~Calculator()
{
    delete root;
}

void Calculator::initialize(const std::string& input)
{
    //the same principle as in reverse polish notation
    //use number operands instead of numbers
    //don't count the expression, but create a new composition operand

    std::string expression = reversePolishNotation(input);

    if (root != nullptr)
        delete root;

    constructExpression(expression);
}

int Calculator::count()
{
    return root->count();
}

std::string Calculator::reversePolishNotation(const std::string &input)
{
    std::stack <char> operators;
    std::string output = "";

    for (size_t i = 0; i < input.length(); i++)
    {
        Sign sign = signType(input[i]);
        switch (sign)
        {
            case NUMBER:
            {
            // if we find out that the symbol we met is number,
            // read the whole number
               while ((i < input.length())
                      && (signType(input[i]) == NUMBER))
               {
                    output += input[i];
                    i++;
               }
               output += ' ';
               break;
            }
            case OPENING_BRACE:
            {
                operators.push(input[i]);
                break;
            }
            case CLOSING_BRACE:
            {
            //we suppose that braces are correct
            //don't check if something is wrong
                while ((!operators.empty())
                       && (signType(operators.top()) != OPENING_BRACE))
                {
                    if(signType(operators.top()) != OPENING_BRACE)
                        output = output + operators.top() + " ";
                    operators.pop();
                }
                //delete the opening brace
                operators.pop();

                break;
            }
            case PLUS:
            case MINUS:
            case MULTIPLICATION:
            case DIVISION:
            {
                while ((!operators.empty())
                       && (signPriority(sign) >= signPriority(operators.top())))
                {
                    if(signType(operators.top()) != OPENING_BRACE)
                        output = output + operators.top() + " ";
                    operators.pop();
                }
                operators.push(input[i]);
                break;
            }
        }

    }

    //when input string is empty, push all the operators into the output
    while (!operators.empty())
    {
        if(signType(operators.top()) != OPENING_BRACE)
            output = output + operators.top() + " ";
        operators.pop();
    }

    return output;
}

void Calculator::constructExpression(const std::string &expression)
{
    //we suppose that the expression is correct!!

    std::stack<Operand*> operands;

    for (size_t i = 0; i < expression.length(); i++)
    {
        Sign sign = signType(expression[i]);
        switch (sign)
        {
            case NUMBER:
            {
            // if we find out that the symbol we met is number,
            // read the whole number
               int n = 0;
               while ((i < expression.length())
                      && (signType(expression[i]) == NUMBER))
               {
                    n = n * 10 + (expression[i] - '0');
                    i++;
               }
               Operand* number = new NumberOperand(n);
               operands.push(number);
               break;
            }

            case PLUS:
            case MINUS:
            case MULTIPLICATION:
            case DIVISION:
            {
                //define two operands
                Operand* a = operands.top();
                operands.pop();

                Operand* b = operands.top();
                operands.pop();

                //define the operation
                CompositionOperand::Operation operation;
                switch (sign) {
                    case PLUS:
                    {
                        operation = CompositionOperand::PLUS;
                        break;
                    }
                    case MINUS:
                    {
                        operation = CompositionOperand::MINUS;
                        break;
                    }
                    case MULTIPLICATION:
                    {
                        operation = CompositionOperand::MULTIPLICATION;
                        break;
                    }
                    case DIVISION:
                    {
                        operation = CompositionOperand::DIVISION;
                        break;
                    }
                }

                Operand* c = new CompositionOperand(b, a, operation);
                operands.push(c);
                break;
            }
        }
    }

    //assign the value at the top of the operands (actually, it is single)
    //with the root of the expression
    root = operands.top();
    operands.pop();
}

Calculator::Sign Calculator::signType(char c)
{
    if (((c - '0') >= 0) && (c - '0') < 10)
        return NUMBER;
    switch(c)
    {
        case '/': return DIVISION;
        case '*': return MULTIPLICATION;
        case '+': return PLUS;
        case '-': return MINUS;
        case '(': return OPENING_BRACE;
        case ')': return CLOSING_BRACE;

        default: return NOT_SIGN;
    }
}

int Calculator::signPriority(Calculator::Sign sign)
{
    switch(sign)
    {
        case NUMBER: return 0;
        case MULTIPLICATION: case DIVISION: return 1;
        case PLUS: case MINUS: return 2;
        case OPENING_BRACE: return 3;
        case CLOSING_BRACE: return 4;

        default: return -1;
    }
}

int Calculator::signPriority(char c)
{
    return signPriority(signType(c));
}

