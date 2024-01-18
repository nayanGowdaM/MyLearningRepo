#include "header.h"

class Student{
    public:
        std::string name;//string is a part of std namespace
        int age;

        
};
int main(){

    System sc;
    sc.Log("Creates a Student object using stack allocation");
    Student  s;//Creates a Student object using stack allocation
    s.name="Nayan";
    s.age=20;
    sc.Log(s.name);
    sc.Log(s.age);

    sc.Log("");
    sc.Log("Creates a Student object using heap allocation and returns a pointer to object");
    Student* st = new Student();  // Creates a Student object using heap allocation and returns a pointer to object
    st->name="Gowda";
    st->age=200;
    sc.Log(st->name);
    sc.Log(st->age);
    sc.Log("");
    delete st;  // Don't forget to delete the object when done with it
    {
        sc.Log("\nIn the scope for Kavya");
        Student std;
        std.name="Kavya";
        std.age=18;
        sc.Log("In scope");
        sc.Log(std.name);
        sc.Log(std.age);


        
    }
    sc.Log("Out of Scope and Kavya cannot be accessed");
    // sc.Log(std.name);std Cannot be used as its scope is limited to above braces


    sc.Log("\nArray of objects");
    Student s1[3];
    s1[0].name="Ajay";
    s1[0].age=18;
    s1[1].name="Ramya";
    s1[1].age=15;
    s1[2].name="Prajwal";
    s1[2].age=23;

    for(int i=0;i<3;i++){
        sc.Log(s1[i].name);
        sc.Log(s1[i].age);
        sc.Log("");
    }


    sc.Log("\nEnter the number of objects:");
    int arraySize=sc.getInt();
    Student* s2 = new Student[arraySize];
    sc.Log("Initializing the objects");
    for( int i=0;i<arraySize;i++){
        sc.Log("\nEnter the name and age of Student");
        s2[i].name=sc.getString();
        s2[i].age=sc.getInt();
    }
    sc.Log("");
    for(int i=0;i<arraySize;i++){
        sc.Log("");
        sc.Log(s2[i].name);
        sc.Log(s2[i].age);
    }

    sc.Log("Writing into console");
    Log log;
    log.setLogLevel(log.LogLevelError);
    log.error("Ohh No!");
    return 0;
}