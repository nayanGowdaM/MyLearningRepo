#include <iostream> // Preprocessor Statement

using namespace std;


class Entity{
        int m_X, m_Y;
    public:

        Entity(){
            m_X=0;
            m_Y=0;
        }
        int get() const { //This method do not modify the state of the object 
            return m_X;
        }
        const int get() {  // This method means that you cannot change the returned integer and the method may modify the state of the object
            m_X=10;
            return m_X;
        }
        void set(int x ){//This method cannot be declared as const because we are changing the value of the attribute 
            m_X=x;
        }

};

int main(){
    // int a=10;
    // a=20; //Can change value of a 
    // const int b=10; //You need to initialize a const variable 
    // // b=20; Cannot be reassigned

    // //Dealing with const pointers
    // int *p=new int;
    // *p=20;

    // const int* ptr;
    // // *ptr=20; You cannot change the value pointed by a const pointer

    // cout<<"Assigning a address to the const pointer"<<" ";
    // ptr=&a;
    // cout<<*ptr<<endl;
    // ptr=&b;
    // cout<<*ptr<<endl;//You can change the address to which ptr is pointing to but not the *ptr
    // cout<<"changing the value at the variable ";
    // a=50;
    // cout<<*ptr<<endl;
    // // You can change value at a by a=30
    // //even ptr is pointing to a you cannot do *ptr = 30 because ptr is a const pointer and do not allow to change the value to which it points to

    // int* const t=new int ; // you can change the value to which t is pointing to but cannot change the address to which t is pointing to 
    // *t=a;
    // cout<<t<<endl;
    // *t=b;
    // cout<<t<<endl;// heap address to which t is pointing remains same you can change the value

    // const int* const tt=new int;//cannot change the contents or the address
    // cout<<*tt<<endl;



    // Const with class and objects 
    Entity e;
    e.set(100);//Can call non const methods 
    cout<<e.get()<<endl;// Calls non const get method ( will modify the state of the object ) prints 10
    

    const Entity e1;//Object state is never modified
    // e1.set(100000); //Set cannot be called on the e1 as set is not a const method but e1 is const 
    cout<<e1.get()<<endl;//Calls const get metod ( will not modify the state of the object) prints 0

}