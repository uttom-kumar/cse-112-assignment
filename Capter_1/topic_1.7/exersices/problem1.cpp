/*
Create a function called sroot() that return the square root of its argument. Overload sroot()
    three ways: have it return the square root of an integer, a long integer, and a double .
    (To actually compute the square root, you can use the standard library function sqrt().)
*/

#include <iostream>
#include <cmath>
using namespace std;

// sroot() for int
void sroot(int n) {
    cout << sqrt(n) <<endl; // Returns square root as double
}

// sroot() for long
void sroot(long n) {
    cout << sqrt(n) <<endl; // Returns square root as double
}

// sroot() for double
void sroot(double n) {
    cout << sqrt(n) << endl;
}

int main()
{
    sroot(10);
    sroot(20);
    sroot(30.30);
}