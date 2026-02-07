/*
    What is wrong with the following fragment ?
    // This program has an error.
*/

#include <iostream>
using namespace std;

class cl1
{
    int i, j; // Private Data
    public:
    cl1(int a, int b)
    {
        i = a;
        j=b;
    }
};

class cl2
{
    int i, j; // Private data
    public:
    cl2(int a, int b)
    {
        i = a;
        j=b;
    }
};


int main()
{
  cl1 x(10, 20);
    cl2 y(0, 0);
    x=y;
    // error here
    // x is cl1 class object
    // y is cl@ class object
    //Different class objects cannot be assigned
    // Complier cannot find : cl! and cl@
    // So compilation fails

}