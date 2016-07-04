#ifndef NUMBEROPERAND_H
#define NUMBEROPERAND_H

#include "operand.h"
#include <type_traits>

class NumberOperand: public Operand
{
public:
    NumberOperand(const float& dataValue);

    Operand* operator+(Operand& other) override;
    Operand* operator-(Operand& other) override;
    Operand* operator*(Operand& other) override;
    Operand* operator/(Operand& other) override;

    int count() override;

private:
    int data;
};


#endif // NUMBEROPERAND_H
