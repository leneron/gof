#include <iostream>
#include "habitat.h"

using namespace std;

int main()
{
    cout << "Start number of population: " ;
    int populationN;
    cin >> populationN;

    Habitat habitat(populationN);

    cout << "Number of generations: " ;
    int generationsN;
    cin >> generationsN;

    habitat.simulateBreed(generationsN);

    return 0;
}

