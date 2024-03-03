#include<bits/stdc++.h>
using  namespace std;

void greet(string name, void(*print)(string)){
    print(name);
}

int main(){
    greet("Nayan",[](string name) { cout<<"GoodMorning "<<name<<endl;});
    greet("Kavya",[](string name) { cout<<"GoodMorning "<<name<<endl;});

    greet("Nayan",[](string name) { cout<<"Good Evening "<<name<<endl;});
    greet("Kavya",[](string name) { cout<<"Good Evening "<<name<<endl;});
}