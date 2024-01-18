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