//
// Created by USER on 4/15/2026.
//
# include <iostream >
using namespace std;
class myclass
{
    int x;
public :
/*
Use default argument instead of overloading
myclass ’s constructor .
*/
myclass (int n = 0) { x = n; }
    int getx () { return x; }
};
int main ()
{
    myclass o1 (10) ; // declare with initial value
    myclass o2; // declare without initializer
    cout << "o1: " << o1. getx () << ’\n’;
    cout << "o2: " << o2. getx () << ’\n’;
    return 0;
}