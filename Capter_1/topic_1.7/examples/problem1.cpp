/*
    problem 1: Function Overloading
*/
#include <iostream>
using namespace std;

// prototypes
// abs() for int
int myAbs(int n)
{
    cout << "In integer abs()" << endl;
    return (n < 0) ? -n : n;
}

// abs() for double
double myAbs(double n)
{
    cout << "In double abs()" << endl;
    return (n < 0) ? -n : n;
}

// abs() for long
long myAbs(long n)
{
    cout << "In long abs()" << endl;
    return (n < 0) ? -n : n;
}

int main()
{
    cout << "Absolute value of -10: " << abs(-10) << endl;
    cout << "Absolute value of -10.01: " << abs(-10.01) << endl;
    cout << "Absolute value of -10L: " << abs(-10L) << endl;

    return 0;
}


