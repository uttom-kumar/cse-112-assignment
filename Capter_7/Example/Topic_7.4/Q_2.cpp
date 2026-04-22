//
// Created by USER on 4/16/2026.
//
# include <iostream >
using namespace std;
// Create first base class .
class B1
{
    int a;
public :

192

INHERITANCE
7.4. MULTIPLE INHERITANCE

B1(int x) { a = x; }
    int geta () { return a; }
};

// Create second base class .
class B2
{
    int b;
public :
B2(int x) { b = x; }
    int getb () { return b; }
};

// Directly inherit two base classes .
class D : public B1 , public B2
{
    int c;
public :
// here z and y are passed directly to B1 and B2
D(int x, int y, int z) : B1(z), B2(y)
{
    c = x;
}
    /*
    Because bases inherited as public , D has access
    to public elements of both B1 and B2.
    */
    void show ()
{
    cout << geta () << " " << getb () << " ";
    cout << c << "\n";
}
};
int main ()
{
    D ob (1 , 2 , 3);
    ob. show ();
    return 0;
}