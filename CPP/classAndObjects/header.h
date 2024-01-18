#include<iostream>
#include<string>

class System{
    public:
    void Log(const char*);
    void Log(std::string);
    void Log(int);
    std::string getString();
    int getInt();
};

class Log{
    public:
        const int LogLevelError=0;
        const int LogLevelWarn=1;
        const int LogLevelInfo=2;
    private:
        int m_logLevel;
    public:
        void setLogLevel(int level);
        void error(const char* msg);
        void warn(const char* msg);
        void info(const char* msg);
};