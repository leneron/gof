#include "numberoperand.h"
#include "typeinfo"

NumberOperand::NumberOperand(const float& dataValue):
    data(dataValue)
{

}

Operand *NumberOperand::operator+(Operand& other)
{
    Operand* result;
    int resultData;
    resultData = this->data + other.count();
    result = new NumberOperand(resultData);

    return result;
}

Operand *NumberOperand::operator-(Operand& other)
{
    Operand* result;
    int resultData;
    resultData = this->data - other.count();
    result = new NumberOperand(resultData);

    return result;
}

Operand *NumberOperand::operator*(Operand& other)
{
    Operand* result;
    int resultData;
    resultData = this->data * other.count();
    result = new NumberOperand(resultData);

    return result;
}

Operand *NumberOperand::operator/(Operand& other)
{
    Operand* result;
    int resultData;
    resultData = this->data / other.count();
    result = new NumberOperand(resultData);

    return result;
}

int NumberOperand::count()
{
    return data;
}

