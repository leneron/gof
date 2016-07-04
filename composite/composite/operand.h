#ifndef OPERAND_H
#define OPERAND_H

#include <memory>

class Operand
{
public:
    Operand();
    virtual ~Operand();

    virtual Operand* operator+(Operand& other) = 0;
    virtual Operand* operator-(Operand& other) = 0;
    virtual Operand* operator*(Operand& other) = 0;
    virtual Operand* operator/(Operand& other) = 0;

    virtual int count() = 0;
};

#endif // OPERAND_H
