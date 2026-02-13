/*
1. It is possible-in fact, quite common-to pass a constructor more than one argument. Here
myclass() is passed two arguments:
*/

#include <iostream>
using namespace std;

class myclass {
    int a, b;
public:
    myclass(int x, int y); // constructor
    void show();
};

// Constructor with two arguments
myclass::myclass(int x, int y) {
    cout << "In constructor\n";
    a = x;
    b = y;
}

// Display the values
void myclass::show() {
    cout << a << ' ' << b << "\n";
}

int main() {
    myclass ob(4, 7); // Pass two arguments to constructor
    ob.show();         // Display the values
    return 0;
}
