/*
* Perhaps the most common use of in-line functions defined within a class is to define
constructor and destructor functions. For example, the sampclass can more efficiently be
defined like this:
 */
#include <iostream>
using namespace std;

class samp {
    int i, j;

public:
    // Inline constructor
    samp(int a, int b) { i = a; j = b; }

    // Inline member function
    int divisible() { return !(i % j); }
};

int main() {
    samp obj1(10, 2), obj2(10, 3);

    if (obj1.divisible())
        cout << "10 is divisible by 2\n";
    else
        cout << "10 is not divisible by 2\n";

    if (obj2.divisible())
        cout << "10 is divisible by 3\n";
    else
        cout << "10 is not divisible by 3\n";

    return 0;
}
