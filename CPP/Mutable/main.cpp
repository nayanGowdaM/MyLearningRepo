#include<bits/stdc++.h>
using namespace std;

class Entity{
    string name="nayan";
    int debug;
    mutable int debugMutable;
    public:
    Entity(){}
    const string get() const{
        // debug++;  Since debug is not mutable you cannot change its value in a const nethod
        debugMutable++;
        return name;
    }
    void set(string& x){
        name=x;
    }
};

int main(){
    Entity e;
    string name="Gowda";
    e.set(name);
    cout<<e.get()<<endl;
    const Entity e1;
    cout<<e1.get()<<endl;
    // e1.set(name); You can not set the name because the object is  const 


    // Lambda Functions
    int x=8;
    int y=10;
    auto f= [x, &y](){
        // x++;  You cannot do this because passing by reference cannot facilitate for modifying
        y++; //Since y is passed by reference you can modify 
        cout<<"x:"<<x<<" y: "<<y<<endl;
    };
    f();
    cout<<y<<endl;//y value is modified in lambda function 


    //If you want to modify a variable in lambda funcion only not outside the function then use mutable
    cout<<"x before lambda function is : " <<x<<endl;
    auto fMutable=[=]() mutable {
        x++; 
        cout<<"x in lambda func: "<<x<<endl;
    };
    fMutable();
    cout<<"x after lambda func: "<<x<<endl;


}