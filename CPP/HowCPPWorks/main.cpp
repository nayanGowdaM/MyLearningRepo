#include <iostream> // Preprocessor Statement

using namespace std;


//Declaring Log funciton
void Log(const char*);
int multiply(int , int);

int main(){  // Entry point 
    cout<<"Hello World!"<<endl;//  << overloaded operators . Think it as a function
    // Cout will push things into console
    Log("HelloWorld");

    cout<<endl<<multiply(5,2)<<endl;
    return 0; // Not Compulsory 
    // if you are not returniing it will assume you are returning 0
}