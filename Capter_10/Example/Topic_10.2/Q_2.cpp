//
// Created by USER on 4/16/2026.
//
using namespace std;
class base
{
public :
int i;
    base (int x) { i = x; }
    virtual void func ()
    {
        cout << " Using base version of func (): ";
        cout << i << endl;
    }
};
class derived1 : public base
{
public :

266

VIRTUAL FUNCTIONS
10.2. INTRODUCTION TO VIRTUAL FUNCTIONS

derived1 (int x) : base (x) {}
    void func ()
{
    cout << " Using derived1 ’s version of func (): ";
    cout << i*i << endl;
}
};
class derived2 : public base
{
public :
derived2 (int x) : base (x) {}
    // derived2 does not override func ()
};
int main ()
{
    base *p;
    base ob (10) ;
    derived1 d_ob1 (10) ;
    derived2 d_ob2 (10) ;
    p = &ob;
    p- > func (); // use base ’s func ()
    p = & d_ob1 ;
    p- > func (); // use derived1 ’s func ()
    p = & d_ob2 ;
    p- > func (); // use base ’s func ()
    return 0;
}