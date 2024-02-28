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
    cout<<"Out of scope\n";
    {
        cout<<"Inside the scope now "<<endl;
        unique_ptr<Entity> e(new Entity());
        cout<<"Going out of scope now\n";
    }
    cout<<"Out of scope \n";

    
}