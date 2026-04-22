//
// Created by USER on 4/9/2026.
//
#include <iostream>
using namespace std;

int main()
{
    int *p, i;

    p = new int[5];
    if (!p)
    {
        cout << "Allocation error\n";
        return 1;
    }

    for (i = 0; i < 5; i++)
        p[i] = i;

    for (i = 0; i < 5; i++)
    {
        cout << "p[" << i << "]: " << p[i] << "\n";
    }

    delete[] p;
    return 0;
}