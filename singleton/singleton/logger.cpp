#include "logger.h"
#include "loggerdestroyer.h"
#include <mutex>
#include <iostream>

Logger* Logger::instance = nullptr;
LoggerDestroyer Logger::loggerDestroyer;

Logger::Logger()
{

}

Logger::Logger(const Logger&)
{

}

Logger&Logger::operator=(Logger&)
{

}

Logger::~Logger()
{

}

Logger&Logger::log()
{
    //critical section for single instance
    std::mutex mutexObject;
    mutexObject.lock();
        if (!instance)
        {
            instance = new Logger();
            loggerDestroyer.initialize(instance);
        }
    mutexObject.unlock();
    return *instance;
}
