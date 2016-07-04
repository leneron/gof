#ifndef LOGGERDESTROYER_H
#define LOGGERDESTROYER_H

class Logger;

class LoggerDestroyer
{
public:
    ~LoggerDestroyer();

    void initialize(Logger* instanceValue);

private:
    Logger* instance;
};
#endif // LOGGERDESTROYER_H
