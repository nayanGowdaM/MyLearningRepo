#include<iostream>
using namespace std;

class Entity{
    public:
        int x,y;
        virtual string getName(){
            return "Entity";
        }
};

class Player : public Entity{
        string m_name;
    public:
        Player(string name){
            m_name=name;
        }
        string getName() override {
            return m_name;
        }
};

void print(Entity* e){
    cout<<e->getName()<<endl;
}
int main(){
    Player* p=new Player("Nayan"); // Pointing to object of type player( Usually a combination of Player and Entity)
    Entity* ee=new Player("Nayan");// Creating a dynamic object of type player and assigning it to Entity
    Entity* e=p; // Pointing to 
    cout<<p->getName()<<endl; // Go to function in Player 
    cout<<e->getName()<<endl;// Go to funtion in Entity 
    cout<<ee->getName()<<endl;


    //Use of virtual functions 
    print(p);  //Even Though You passeed the an object of type player print function refers to entity class
}
