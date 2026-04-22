//
// Created by USER on 4/16/2026.
//
# include <iostream >
using namespace std;
class base
{
    int x;
public :
void setx (int n) { x = n; }
    void showx () { cout << x << endl; }
};
// Inherit as public .
class derived : public base
{
    int y;
public :
void sety (int n) { y = n; }
    void showy () { cout << y << endl; }
};
int main ()
{
    derived ob;
    ob. setx (10) ; // access member of base class

    176

    INHERITANCE
    7.1. BASE CLASS ACCESS CONTROL

    ob. sety (20) ; // access member of derived class
    ob. showx (); // access member of base class
    ob. showy (); // access member of derived class
    return 0;
}