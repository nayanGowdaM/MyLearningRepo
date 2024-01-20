#include<iostream>
using namespace std;

class Entity{ //Parent or Base Class
    public:
        int x,y;
        void move(int xa,int ya){
            x=xa;
            y=ya;
            cout<<"Entity moved from "<<x  <<" to  "<<ya<<endl;
        }

};

// Child Class of Entity
class Player :public Entity{ //Player Inherits properties from Entity
    public:
        string name;
        void printName(){
            cout<<name<<" ";
        }
};

int main(){
    Player player;
    string name="Nayan Gowda";
    player.name=name;
    player.printName();
    player.move(2,5);
    return 0;
}