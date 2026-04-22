//
// Created by USER on 4/16/2026.
//
class base
{
    int i;
public :
base (int n)
{
    cout << " Constructing base class \n";




    i = n;
}
    ~ base () { cout << " Destructing base class \n"; }
    void showi () { cout << i << endl; }
};
class derived : public base
{
    int j;
public :
derived (int n) : base (n) // pass arg to base class .
{
    cout << " Constructing derived class \n";
    j = 0;
}
    ~ derived () { cout << " Destructing derived class \n"; }
    void showj () { cout << j << endl; }
};