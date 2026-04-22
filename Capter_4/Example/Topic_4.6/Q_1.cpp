//
// Created by USER on 4/9/2026.
//
#include <iostream>
using namespace std;

void f(int &n)
{
    n = 100;
}

int main()
{
    int i = 0;
    f(i);
    cout << "i's new value: " << i << "\n";
    return 0;
}