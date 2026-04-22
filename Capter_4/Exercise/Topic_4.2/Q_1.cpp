//
// Created by USER on 4/9/2026.
//
#include <iostream>
using namespace std;

class samp
{
    int num1, num2;

public:
    samp(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    int get_num1()
    {
        return this->num1;
    }
    int get_num2()
    {
        return this->num2;
    }
};

int main()
{
    samp ob[4] = {
        samp(1, 2),
        samp(3, 4),
        samp(5, 6),
        samp(7, 8)};

    samp *ptr;
    ptr = &ob[3];

    cout << "Array contents in reverse:\n";
    for (int i = 0; i < 4; i++)
    {
        cout << ptr->get_num1() << " ";
        cout << ptr->get_num2() <<endl;;
        ptr--;
    }

    return 0;
}
