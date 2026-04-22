//
// Created by USER on 4/9/2026.
//
#include <iostream>
#include <cmath>
using namespace std;

void round(double &num)
{
    double frac;
    double val;

    frac = modf(num, &val);

    if (frac < 0.5)
    {
        num = val;
    }
    else
    {
        num = val + 1.0;
    }
};

int main()
{
    // double i = 100.4;
    // cout << i << " rounded is ";
   int result =  round(100.223);

    cout << result<< "\n";

    // i = 10.9;
    // cout << i << " rounded is ";
    // round(i);
    // cout << i << "\n";

    return 0;
}
