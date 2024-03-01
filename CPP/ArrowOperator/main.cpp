#include<bits/stdc++.h>
using namespace std;

class Entity{
    public:
        int x,  y;
        Entity( int X, int Y){
            this->x=X;
            this->y=Y;
        }
        ~Entity(){
            cout<<"Deconstructor Called\n";
        }
};

int main(){
    //Step 1 : Stack Allocation
    {    
        Entity ent(0,0);
        cout<<"Using . \nent.x:"<<ent.x<<"\nent.y: "<<ent.y<<endl;
        cout<<endl;
        cout<<"Using -> \n(&ent)->x: "<<(&ent)->x<<endl;
        
    }
    cout<<endl<<endl;
    Entity* ent ;
    ent = new Entity(10,20);
    //
    cout<<"Using Arrow Pointer \nent->x :" <<ent->x<<endl;
    //Using .
    cout<<"Without using arrow pointer: \n 1. Dereference it first and then print x\n"<<endl;
    cout<<"(*ent).x: "<<(*ent).x<<endl;
}