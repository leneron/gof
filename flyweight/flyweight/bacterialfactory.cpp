#include "bacterialfactory.h"
#include "grampositivebacteria.h"
#include "gramnegativebacteria.h"

BacterialFactory::BacterialFactory()
{

}

Bacteria* BacterialFactory::createBacteria(const Bacteria::BacteriaType& type)
{
    Bacteria* result;

    auto i = bacterium.find(type);
    if (i != bacterium.end())
    {
        result = i->second;
    }
    else
    {
        switch (type)
        {
        case Bacteria::GRAMPOSITIVE:
            {
                result = new GrampositiveBacteria();
                break;
            }
        case Bacteria::GRAMNEGATIVE:
            {
                result = new GramnegativeBacteria();
                break;
            }
        }
        bacterium.insert(std::pair<Bacteria::BacteriaType, Bacteria*>(type, result));
    }
    return result;
}

