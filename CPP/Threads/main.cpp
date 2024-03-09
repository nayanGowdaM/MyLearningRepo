#include<iostream>
#include<thread>

using namespace std;

static bool isFinished = false;
static int ct=2000;
void DoWork(){
    //To wait for a second
    using namespace std::literals::chrono_literals;
    cout<<"Started thread with id = "<< this_thread::get_id()<<endl;
    while(!isFinished){
        cout<<"Working\n";
        // this_thread::sleep_for(0.000001s);//This thread is used to give commands to current theread
    }
}

void mainProg(){
    
    while(--ct) 
    cout<<ct<<".MainProg\n";
}

int main(){
    thread worker(DoWork);//Pass in a function Pointer 
    cout<<"MainThread"<<endl;
    mainProg();
    cin.get();
    isFinished=true;
    worker.join(); // Waiting for the thread to join ( complete its operation)
    cin.get();
}