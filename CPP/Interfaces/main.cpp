#include <iostream>
using namespace std;

// Abstract class with a pure virtual function
class Interface {
public:
    virtual void pureVirtualFunction() = 0;
};

// Concrete class implementing the Interface
class Implementation : public Interface {
public:
    void pureVirtualFunction() override {
        cout << "Implementation of pure virtual function." << endl;
    }
};

int main() {
    Implementation obj;
    obj.pureVirtualFunction();

    // Note: You cannot create an instance of Interface directly
    // Interface interfaceObj; // This line would result in a compilation error

    return 0;
}
