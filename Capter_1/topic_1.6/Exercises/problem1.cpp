// The Following program will not compile as a C++ program.
//Why not?

// This program has an error
#include <iostream>
using namespace std;

void f()
{
    cout << "this won't work"<< endl;
}

int main()
{
    f();
    return 0;
}