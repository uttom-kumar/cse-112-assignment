//
// Created by USER on 4/9/2026.
//
#include <iostream>
using namespace std;

int &f();
int x;

int main()
{
    f() = 100;
    cout << x << "\n";
    return 0;
}

int &f()
{
    return x;
}