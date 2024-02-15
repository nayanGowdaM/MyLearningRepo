#include<bits/stdc++.h>
using namespace std;

class Entity{
    string name;
    public: 
    Entity(): name("unknown"){}
    Entity( string x): name(x){}
    string get(){
        return name ;
    }
    void set(string x){
        name = x;
    }
};


int main(){
    int a=10; //stack allocation 
    int* b= new int;//Just allocating memory for integer on heap and initializing with 0
    int* c= new int(100);//Just allocating memory for integer on heap and initializing with 100
    cout<<*b<<", "<<*c<<endl;

    //Creating array with new keywork
    int* arr = new int[10];// Block of 10 integer memory locations is allocated 
    cout<<sizeof(arr)<<endl;// returns sizeof the pointer ie,. 8

    delete b;
    delete[] c;// Since c is array pointer 



    Entity* entity = new Entity;
    Entity* entitymalloc =(Entity*)malloc( sizeof(Entity));//Tis is similar to new keyword as it allocates memory but not calls the constructor
    Entity* entityarr= new Entity[50];//Array of objects 


    delete entity;// frees the memory and calls the destuctor

}