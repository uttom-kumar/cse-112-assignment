# include <iostream>
using namespace std;
int main ()
{
    float *f;
    long *l;
    char *c;
    f = new float ;
    l = new long ;
    c = new char ;
    if (!f || !l || !c)
    {
        cout << " Allocation error .";
        return 1;
    }
    *f = 10.102;
    *l = 100000;
    *c = 'A';
    cout << *f << ' ' << *l << ' ' << *c;
    cout << '\n';
    delete f;
    delete l;
    delete c;
    return 0;
}