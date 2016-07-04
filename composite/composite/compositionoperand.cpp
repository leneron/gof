#include "compositionoperand.h"

CompositionOperand::CompositionOperand(Operand* firstValue,
                                       Operand* secondValue,
                                       CompositionOperand::Operation operationValue):
                                       first(firstValue),
                                       second(secondValue),
                                       operation(operationValue)
{

}

CompositionOperand::~CompositionOperand()
{
    delete first;
    delete second;
}

Operand* CompositionOperand::operator+(Operand& other)
{
    Operand* result;
    result = new CompositionOperand(this, &other, PLUS);
    return result;
}

Operand* CompositionOperand::operator-(Operand& other)
{
    Operand* result;
    result = new CompositionOperand(this, &other, MINUS);
    return result;
}

Operand* CompositionOperand::operator*(Operand& other)
{
    Operand* result;
    result = new CompositionOperand(this, &other, MULTIPLICATION);
    return result;
}

Operand* CompositionOperand::operator/(Operand& other)
{
    Operand* result;
    result = new CompositionOperand(this, &other, DIVISION);
    return result;
}

int CompositionOperand::count()
{
    int result;
    switch (operation)
    {
        case PLUS:
        {
            result = first->count() + second->count();
            break;
        }
        case MINUS:
        {
            result = first->count() - second->count();
            break;
        }
        case MULTIPLICATION:
        {
            result = first->count() * second->count();
            break;
        }
        case DIVISION:
        {
            result = first->count() / second->count();
            break;
        }
    }
    return result;
}


