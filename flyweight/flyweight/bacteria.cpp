#include "bacteria.h"

Bacteria::Bacteria(const float& probabilityBreedValue):
    probabilityBreed(probabilityBreedValue)
{

}
Bacteria::BacteriaType Bacteria::getType() const
{
    return type;
}

