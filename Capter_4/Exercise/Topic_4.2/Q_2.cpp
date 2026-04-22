//
// Created by USER on 4/9/2026.
//
#include <iostream>
using namespace std;

class samp
{
    int a;

public:
    samp(int n) { a = n; }
    int get_a() { return a; }
};

int main()
{
    samp ob[4][2] = {1, 2, 3, 4, 5, 6, 7, 8};

    samp *ptr = (samp *)ob;

    cout << "2D Array accessed via 1D pointer:\n";
    for (int i = 0; i < 8; i++)
    {
        cout << ptr->get_a() << " ";
        ptr++;
        if (i % 2 != 0)
            cout << "\n";
    }

    return 0;
}
