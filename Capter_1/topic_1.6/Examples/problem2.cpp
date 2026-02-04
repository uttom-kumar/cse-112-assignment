/*
    Here is a short program that illustrates how local variables can be declared anywhere within a block :
 */

#include <iostream>
using namespace std;

int main() {

    cout << "Start of program" << endl;

    int x = 10;  // local variable declared at the start
    cout << "x = " << x << endl;

    if (x > 5) {
        int y = 20;  // local variable declared inside if block
        cout << "y = " << y << endl;

        // you can even declare a variable here
        int z = x + y;
        cout << "z = " << z << endl;
    }

    int a = 50; // variable declared later in the block
    cout << "a = " << a << endl;

    return 0;
}
