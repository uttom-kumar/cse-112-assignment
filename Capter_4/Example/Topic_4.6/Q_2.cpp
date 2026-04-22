//
// Created by USER on 4/9/2026.
//
#include <iostream>
using namespace std;

void swapargs(int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;
}

int main()
{
    int i = 10, j = 19;
    cout << "i: " << i << ", j: " << j << "\n";

    swapargs(i, j);

    cout << "After swap - i: " << i << ", j: " << j << "\n";
    return 0;
}