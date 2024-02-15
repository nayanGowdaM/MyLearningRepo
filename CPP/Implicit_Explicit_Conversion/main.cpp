#include<bits/stdc++.h>
using namespace std;

class Entity{

    public:
    string name;
    int age;
    explicit Entity(string x): name(x), age(-1) {}
    Entity(int n): age(n),name("unknown"){} //This constructor must be called explicitly 
    Entity(string x, int n): name(x),age(n) {}
};

int main(){
    //Implicit conversion of number and strng to entity 
    Entity e0(10);
    cout<<"Entity 0, name="<<e0.name<<" age:"<<e0.age<<endl;

    Entity e2 = (10);
    cout<<"Entity 2, name="<<e2.name<<" age:"<<e2.age<<endl;

    Entity e1("nayan");//Entity(name) constructor is called explicitly 
    cout<<"Entity 1, name="<<e1.name<<" age:"<<e1.age<<endl;

    // Entity e3="nayan";// Constructor is not called explicitly - Compiler error 
    // cout<<"Entity 3, name="<<e3.name<<" age:"<<e3.age<<endl;
    

    Entity e3 = (Entity) "nayan"; //Casted explicitly to entity 
    cout<<"Entity 3, name="<<e3.name<<" age:"<<e3.age<<endl;

}