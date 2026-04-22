//
// Created by USER on 4/15/2026.
//
// This program is ambiguous .
# include <iostream >
using namespace std;
void f( unsigned char c)
{
    cout << c;
}
void f( char c)
{
    cout << c;
}
int main ()
{
    f(’c’);
    f (86) ; // which f() is called ???
    return 0;
}