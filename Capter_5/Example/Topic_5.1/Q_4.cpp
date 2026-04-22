//
// Created by USER on 4/15/2026.
//
using namespace std;
class myclass
{
    int x;
public :
// overload constructor two ways
myclass () { x = 0; } // no initializer
    myclass (int n) { x = n; } // initializer
    int getx () { return x; }
};
int main ()
{
    myclass *p;
    myclass ob (10) ; // initialize single variable
    p = new myclass [10]; // can ’t use initializers here
    if (!p)
    {
        cout << " Allocation error \n";
        return 1;
    }
    int i;
    // initialize all elements to ob
    for (i=0; i <10; i++)
        p[i] = ob;
    for (i=0; i <10; i++)
    {
        cout << "p[" << i << "]: " << p[i]. getx ();
        cout << endl;
    }
    return 0;
}