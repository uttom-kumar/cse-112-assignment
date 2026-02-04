/*
    This short C++ program will not compile because the function sum() is not prototyped
 */

// This program will not compile.
#include <iostream>
using namespace std;

// This function needs a prototype
sum (int a, int b) {
    return a + b;
}

int main() {
    int a, b, c;
    cout << "Enter two integer numbers: ";
    cin >> a >> b;

    c = sum (a+b);
    cout << c << endl;

    return 0;
}