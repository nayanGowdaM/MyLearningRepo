#include<iostream>
#include<cstring>
using namespace std;

int main(){
    //Declaring Pointers
    int v=9;
    int* ptr=&v;
    cout<<*ptr<<endl;

    //Declaring pointers dynamically uing new keyword
    char* c= new char; //allocating 8 bits of memory starting with memory address in c
    char* p=c;
    memset(p,'a',sizeof(char)); // sets 'a' as the value at he char pointer 
    //1st Parameter memory address 
    //2nd Parameter - value with which we need to initialize the memory address
    //3rd Parameter - Total number of bytes
    cout<<sizeof(c)<<endl;
    cout<<(*c)<<endl;

    //Pointing to an array of charecters
    char* pt=new char[2];
    memset(pt,'b',2*sizeof(char));
    cout<<(*pt)<<endl;
    //Printing the second element
    cout<<(*(pt+sizeof(char)))<<endl;

    cout<<sizeof(pt)<<" "<<sizeof(char)<<endl;

    int a;
    memset(&a,2,sizeof(a));
    cout<<sizeof(a)<<" "<<sizeof(int);

}