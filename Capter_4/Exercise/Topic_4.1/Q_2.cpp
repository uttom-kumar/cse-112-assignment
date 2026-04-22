//
// Created by USER on 4/9/2026.
//
#include <iostream>
using namespace std;

class squares
{
    int num, sqrt;

public:
    squares(int num, int sqrt)
    {
        this->num = num;
        this->sqrt = sqrt;
    }

    void display()
    {
        cout << num << " squared is " << this->sqrt << "\n";
    }
};

int main()
{
    squares value[10] = {
        squares(1, 1), squares(2, 4), squares(3, 9), squares(4, 16),
        squares(5, 25), squares(6, 36), squares(7, 49), squares(8, 64),
        squares(9, 81), squares(10, 100)};

    for (int i = 0; i < 10; i++)
    {
        value[i].display();
    }

    return 0;
}