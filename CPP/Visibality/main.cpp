#include <iostream>
using namespace std;

// Base class with public, protected, and private members
class VisibilityDemo {
public:
    int publicVar;
    
    VisibilityDemo() : publicVar(0), protectedVar(0), privateVar(0) {
        // Constructor
    }

    void publicFunction() {
        cout << "Public function called." << endl;
    }

protected:
    int protectedVar;

    void protectedFunction() {
        cout << "Protected function called." << endl;
    }

private:
    int privateVar;

    void privateFunction() {
        cout << "Private function called." << endl;
    }

public:
    // Function to access private members from outside the class
    void accessPrivateMembers() {
        cout << "Accessing private members from within the class:" << endl;
        privateVar = 1;
        privateFunction();
        cout << "privateVar: " << privateVar << endl;
    }
};

// Derived class
class Derived : public VisibilityDemo {
public:
    void accessBaseMembers() {
        cout << "Accessing base class members from the derived class:" << endl;
        publicVar = 2;  // Public member is accessible
        publicFunction();
        
        protectedVar = 2;  // Protected member is accessible
        protectedFunction();
        
        // privateVar and privateFunction are not accessible in the derived class
        // privateVar = 2;  // This line would result in a compilation error
        // privateFunction();  // This line would result in a compilation error
    }
};

int main() {
    VisibilityDemo obj;

    cout << "Accessing public members from outside the class:" << endl;
    obj.publicVar = 3;  // Public member is accessible
    obj.publicFunction();

    // protectedVar and protectedFunction are not accessible from outside the class
    // obj.protectedVar = 3;  // This line would result in a compilation error
    // obj.protectedFunction();  // This line would result in a compilation error

    // privateVar and privateFunction are not accessible from outside the class
    // obj.privateVar = 3;  // This line would result in a compilation error
    // obj.privateFunction();  // This line would result in a compilation error

    obj.accessPrivateMembers();  // Demonstrating access to private members from within the class

    cout << "\nUsing a derived class:" << endl;
    Derived derivedObj;
    derivedObj.accessBaseMembers();

    return 0;
}
