//
// 1. Here is a simple example that uses an object pointer:
//
#include <iostream>
using namespace std;

class myclass {
    int a;
public:
    myclass(int x); // constructor
    int get();
};

// Constructor
myclass::myclass(int x) {
    a = x;
}

// Return the value
int myclass::get() {
    return a;
}

int main() {
    myclass ob(120); // create object
    myclass *p;      // create pointer to object

    p = &ob;         // store address of ob in p

    cout << "Value using object: " << ob.get() << "\n";
    cout << "Value using pointer: " << p->get() << "\n";

    return 0;
}
