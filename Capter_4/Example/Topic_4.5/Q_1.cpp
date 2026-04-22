//
// Created by USER on 4/9/2026.
//
#include <iostream>
using namespace std;

int main()
{
    int *p;

    p = new int(9);

    if (!p)
    {
        cout << "Allocation error\n";
        return 1;
    }

    cout << "Value at p: " << *p << "\n";

    delete p;
    return 0;
}