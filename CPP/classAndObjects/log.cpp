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

