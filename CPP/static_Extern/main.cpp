#include<iostream>
int v=10;//Global variable cannot be declared twice (v has  been declared in static.cpp )
extern int e_v; //Solution to above problem is by marking it as extern as it looks for variable e_v externally
int s_v=10;//But if the varibale is static then both variable behave differently


class Entity{
    public:
        static int x,y; //This is only declaration and no memory is allocated
        static void print(){
            std::cout<<x<<", "<<y<<std::endl;
        }

};

class Entity1{
    public:
        int x,y;
        static void print(){
            // Static Method can never access non static varibles
            // std::cout<<x<<", "<<y<<std::endl;
        }
};

int Entity::x;
int Entity::y;//This is the definatioin of the static variale and memory is alocated

int main(){
    std::cout<<v<<std::endl;
    std::cout<<"Extern Variable"<<e_v<<std::endl;
    std::cout<<"Static Variable"<<s_v<<std::endl;

    Entity e;
    e.x=0;
    e.y=0;

    Entity e1;
    e1.x=10;
    e1.y=01;//x and y of Entity are shared among all instances 
    Entity::x=50;
    Entity::y=50;//all the instances point to same memory location of x and y. Hence we can also potentially use it as Entity::x . This holds good for static methods too.
    std::cout<<e.x<<",  "<<e.y<<std::endl;
    std::cout<<e1.x<<",  "<<e1.y<<std::endl;

    Entity::print();//Static method can access static variable
    // Entity1::print(); //Static method cannot access non static variables;

    return 0;
}