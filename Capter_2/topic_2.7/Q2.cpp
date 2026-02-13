/*
 * . Sometimes a short function will be included in a class declaration even though the automatic
 in-lining feature is of little or no value. Consider this class declaration:
 */

#include <iostream>
using namespace std;

class myclass {
    int i;

public:
    // Inline constructor
    myclass(int n) { i = n; }

    // Inline member function
    void show() { cout << i; }
};

int main() {
    myclass obj(42);  // create object with value 42
    cout << "Value of i: ";
    obj.show();       // display the value
    cout << "\n";
    return 0;
}
