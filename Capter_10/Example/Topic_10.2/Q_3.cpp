//
// Created by USER on 4/16/2026.
//
# include <iostream >
# include <cstdlib >
using namespace std;
class base
{
public :
int i;
    base (int x) { i = x; }
    virtual void func ()
    {
        cout << " Using base version of func (): ";
        cout << i << ’\n’;
    }
};
class derived1 : public base
{
public :
derived1 (int x) : base (x) {}
    void func ()
{
    cout << " Using derived1 ’s version of func (): ";
    cout << i*i << ’\n’;
}
};
class derived2 : public base
{
public :
derived2 (int x) : base (x) {}
    void func ()
{
    cout << " Using derived2 ’s version of func (): ";
    cout << i+i << endl;
}
};
int main ()
{
    base *p;
    derived1 d_ob1 (10) ;
    derived2 d_ob2 (10) ;
    int i, j;
    for (i=0; i <10; i++)
    {
        j = rand ();
        if ((j%2) )

            268

            VIRTUAL FUNCTIONS
            10.2. INTRODUCTION TO VIRTUAL FUNCTIONS

            p = & d_ob1 ; // if odd use d_ob1
        else
            p = & d_ob2 ; // if even use d_ob2
        p- > func (); // call appropriate function
    }
    return 0;
}