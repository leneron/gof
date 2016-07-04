#ifndef LOGGER_H
#define LOGGER_H

class LoggerDestroyer;

class Logger
{   
public:
    static Logger& log();

protected:
    Logger();
    Logger(const Logger&);
    Logger& operator=(Logger&);

    ~Logger();
    friend class LoggerDestroyer;

private:
    static Logger* instance;
    static LoggerDestroyer loggerDestroyer;
};

#endif // LOGGER_H
