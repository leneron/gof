#ifndef COMPOSITIONOPERAND_H
#define COMPOSITIONOPERAND_H

#include "operand.h"
#include "numberoperand.h"

class CompositionOperand: public Operand
{
public:
    enum Operation{PLUS, MINUS, MULTIPLICATION, DIVISION};

    CompositionOperand(Operand* firstValue,
                       Operand* secondValue,
                       Operation operation);
    ~CompositionOperand();

    Operand* operator+(Operand& other) override;
    Operand* operator-(Operand& other) override;
    Operand* operator*(Operand& other) override;
    Operand* operator/(Operand& other) override;

    int count() override;

private:
    Operand* first;
    Operand* second;

    Operation operation;
};

#endif // COMPOSITIONOPERAND_H
