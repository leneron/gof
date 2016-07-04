#ifndef LOGGERWRITER_H
#define LOGGERWRITER_H

#include "logger.h"
#include <mutex>

template<typename T>
Logger& operator<<(Logger&, const T& data)
{
    std::mutex mutexObject;
    mutexObject.lock();
        std::cout << data;
    mutexObject.unlock();
    return Logger::log();
}

#endif // LOGGERWRITER_H
