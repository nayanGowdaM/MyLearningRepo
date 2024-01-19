#include<iostream>


enum Example{
    A,B,C,D=10,E,F //If values not specified then starts initializing with 0(or with the value specified for the first variable)
};

//Can also specify the type of data enum should hold 
enum ExampleDataType : char{
    Q='a',W,R,T,Y
};

int main(){
    Example value=C;
    // Example value=20; //One from the enum 
    Example val=E;
    std::cout<<value<<std::endl;
    std::cout<<E<<std::endl;

    ExampleDataType e1=T;
    std::cout<<e1<<std::endl;
    return 0;
}