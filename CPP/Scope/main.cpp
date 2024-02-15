#include<bits/stdc++.h>
using namespace std;

class Entity{
    int x;
public:
    void set(int x){
        this->x=x;
    }
    int get( ){
        return this->x;
    }
    Entity(){
        cout<<"created Entity object"<<endl;
    }
    ~Entity(){
        cout<<"Destroyed Entity object"<<endl;
    }
};

class ScopedPtr{
    private :
        Entity* m_Ptr;
    public: 
        ScopedPtr(Entity* ptr){
            m_Ptr=ptr;
        }

        ~ScopedPtr(){
            delete m_Ptr;
        }
};

int main(){
    //Empty Scope 
    Entity* x;
    Entity y;
    {
        Entity e;
        e.set(50);
        Entity* ep=new Entity();
        ep->set(10);
        x=ep;
        y=e;
    }

    // cout<<ep->get<<endl;// ep is just not in the scope but not destroyed .
    cout<<"Stack Storage: "<<y.get()<<endl; // 50 is not visible because entity has been destroyed 
    cout<<"Heap storage: "<<x->get()<<endl; // 10 is visible because eneity has not been destroted
    Entity e;
    Entity* ep=new Entity();


    // Even after using new keyword make the destroy the object as scope ends
    {
        ScopedPtr s=new Entity();
        cout<<"Scope ends in next line\n";
    }

}