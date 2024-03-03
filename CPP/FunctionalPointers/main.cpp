#include<bits/stdc++.h>
using namespace std;

void greet(string name="Nayan"){
    cout<<"Good Morning "<<name<<endl;
}

int main(){
    auto Greeting = greet;
    Greeting("Kavya");
    greet();
    void(*an)(string) = greet;
    an("Kate Cross");
}