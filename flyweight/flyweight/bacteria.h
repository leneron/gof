#ifndef BACTERIA_H
#define BACTERIA_H

#include <string>

//Flyweight
class Bacteria
{
public:
    Bacteria(const float& probabilityBreedValue = 1.0);

    enum BacteriaType{GRAMPOSITIVE, GRAMNEGATIVE};

    virtual bool breed(bool favorableConditions) = 0;

    BacteriaType getType() const;

protected:
    const int RANGE = 100;

    BacteriaType type;
    float probabilityBreed;
};

#endif // BACTERIA_H
