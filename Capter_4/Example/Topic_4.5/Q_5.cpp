//
// Created by USER on 4/9/2026.
//
#include <iostream>
using namespace std;

class samp
{
public:
    ~samp() { cout << "Destroying...\n"; }
};

int main()
{
    samp *p;
    p = new samp[10];

    if (!p)
    {
        cout << "Allocation error\n";
        return 1;
    }

    delete[] p;
    return 0;
}