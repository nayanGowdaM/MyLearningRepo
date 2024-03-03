#include<bits/stdc++.h>
using namespace std;

template<typename T> 
void print(T value){
    cout<<value<<endl;
}

int main(){
    int x=10;
    float d=52.5;
    string str="nau";
    print<int>(x);
    print(d);
    print<string>(str);// Avoids overloading if the overloading methods change  by only parameter type 


}