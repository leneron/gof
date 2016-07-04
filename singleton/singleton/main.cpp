#include <iostream>
#include "log.h"

using namespace std;

int main()
{
    Logger::log() << "123" << "456";
    Logger::log() << 7;
    return 0;
}

