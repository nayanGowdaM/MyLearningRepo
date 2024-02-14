#include<bits/stdc++.h>
using namespace std;

class Entity{
    string name;
    public:
    Entity(): name("Unknown"){}
    Entity(string x): name(x) {}
    string get(){
        return name;
    }
};

int main(){
    cout<<"Creating an object in stack space:"<<endl;
    Entity e0;
    cout<<e0.get()<<endl<<endl;

    Entity e1("Nayan");
    cout<<e1.get()<<endl<<endl;

    Entity e2 = Entity("NayanGowda");
    cout<<e2.get()<<endl<<endl;

    cout<<"Creating objects on heap : "<<endl;
    //We allocate memory on the heap  
    //We call the constructor
    //new Entity() returns ans entity pointer ( location of the entity where it is located on the heap)
    Entity* e3 = new Entity();
    cout<<e3->get()<<endl;
}