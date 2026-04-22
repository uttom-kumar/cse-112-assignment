//
// Created by USER on 4/15/2026.
//
# include <iostream >
using namespace std;
int f(int a, int b)
{
    return a+b;
}
// this is inherently ambiguous
int f(int a, int &b)
{
    return a-b;


    }
int main ()
{
    int x=1 , y=2;
    cout << f(x, y); // which version of f() is called ???
    return 0;
}