#include<iostream>

class Entity{
    public:
        int x;
        float y;

        //Constructor
        Entity(){
            x=0;
            y=0.0f;
            std::cout<<"Created Entity"<<std::endl;
        }
        Entity(int X,int Y){
            x=X;
            y=Y;
            std::cout<<"Created Entity"<<std::endl;
        }

        //Destructor
        ~Entity(){
            std::cout<<"Destroyed Entity"<<std::endl;
        }

        void print(){
            std::cout<<x<<", "<<y<<std::endl;
        }
        

};

void func(){
    Entity e;
    e.print();
    std::cout<<"scope ends for obj in func "<<std::endl;

}

int main(){
    Entity e; //Using Constructors with no parameters
    e.print();
    std::cout<<std::endl;
    Entity e1(2, 6); //Using Constructor with 2 parameters
    e1.print();\
    std::cout<<std::endl;
    func();
    return 0;
}