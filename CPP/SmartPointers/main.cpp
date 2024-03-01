#include<bits/stdc++.h>
using namespace std ;

class Entity{
    public:
        Entity(){
            cout<<"Created an entity object.\n";
        }
        ~Entity(){
            cout<<"Destoyed an entity object.\n";
        }
};

int main(){
    {    
        cout<<"Out of scope\n";
        {
            cout<<"Inside the scope now "<<endl;
            unique_ptr<Entity> e(new Entity());
            //Using make unique entity 
            unique_ptr<Entity>e2= make_unique<Entity>();
            cout<<"Going out of scope now\n";
        }
        cout<<"Out of scope \n";
    }
    {    
        cout<<"*****SharedPointer*******\n";
        cout<<"Out of scope\n";
        shared_ptr<Entity> shrdPtr(new Entity());
        {
            cout<<"Inside the scope now "<<endl;
            
            //Using make unique entity 
            shared_ptr<Entity>e2= shrdPtr;
            cout<<"Going out of scope now\n";//Evern though the scope of e2 ends here entity is not yet destroyed
        }
        cout<<"Out of scope \n";
    }
    

    {    cout<<"*****Weak Pointers*******\n";
        cout<<"Out of scope\n";
        shared_ptr<Entity> WeakPtr(new Entity());
        {
            cout<<"Inside the scope now "<<endl;
            
            //Using make unique entity 
            shared_ptr<Entity>e2= WeakPtr;
            cout<<"Going out of scope now\n";//Evern though the scope of e2 ends here entity is not yet destroyed
        }
        cout<<"Out of scope \n";
    }
}