#include "header.h"
void System::Log(const char* msg){ // Must write System:: before else it assumes it as a function not belonging to System Class 
    std:: cout<<msg<<std::endl;
}

void System::Log(std::string msg){
    std::cout<<msg<<std::endl;
}

void System::Log(int num){
    std::cout<<num<<std::endl;
}

std::string System::getString(){
    std::string str;
    std::cin>>str;
    return str;
}

int System::getInt(){
    int n;
    std::cin>>n;
    return n;
}

void Log::setLogLevel(int level){
    m_logLevel=level;
}
void Log::error(const char* msg){
    if(m_logLevel>=LogLevelError){
        std::cout<<" [ERROR] "<<msg<<std::endl;
    }
}
void Log::warn(const char* msg){
    if(m_logLevel>=LogLevelWarn){
        std::cout<<" [WARNING] "<<msg<<std::endl;
    }
}
void Log::info(const char* msg){
    if(m_logLevel>=LogLevelInfo){
        std::cout<<" [INFO] "<<msg<<std::endl;
    }
}