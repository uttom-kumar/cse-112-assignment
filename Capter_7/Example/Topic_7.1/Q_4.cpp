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
    void showx () { cout << x << ’\n’; }
};
// Inherit base as private .
class derived : private base
{
    int y;
public :
// setx is accessible from within derived
void setxy (int n, int m) { setx (n); y = m; }
    // show is accessible from within derived
    void showxy () { showx (); cout << y << endl; }
};
int main ()
{
    derived ob;
    ob. setxy (10 , 20) ;
    ob. showxy ();
    return 0;
}
In this case, the functions setx() and showx() are accessed inside the derived class, which
is perfectly legal because they are private members of that class.
EXERCISES
1. Examine this skeleton:
# include <iostream >
using namespace std;
class mybase
{
    int a, b;
public :
int c;
    void setab (int i, int j) { a = i; b = j; }
    void getab (int &i, int &j) { i = a; j = b; }
};
class derived1 : public mybase
{
    // ...
};
class derived2 : private mybase
{



    };
int main ()
{
    derived1 o1;
    derived2 o2;
    int i, j;

}