#include "loggerdestroyer.h"
#include "logger.h"
#include <mutex>

LoggerDestroyer::~LoggerDestroyer()
{
    //critical section for single deleting
    std::mutex mutexObject;
    mutexObject.lock();
        if (instance)
            delete instance;
    mutexObject.unlock();
}

void LoggerDestroyer::initialize(Logger* instanceValue)
{
    instance = instanceValue;
}
