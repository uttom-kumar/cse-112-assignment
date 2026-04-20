# include <iostream>
# include <cstring>
# include <cstdlib>
using namespace std;
class strtype
{
    char *p;
public :
strtype ( char *s);
    ~ strtype () { delete [] p; }
    char *get () { return p; }
};
strtype :: strtype ( char *s)
{
    int l;
    l = strlen (s)+1;
    p = new char [l];
    if (!p)
    {
        cout << " Allocation error \n";
        exit (1) ;
    }
    strcpy (p, s);
}

// Fix by using a reference parameter .
void show ( strtype &x)
{
    char *s;
    s = x.get ();
    cout << s << "\n";
}
int main ()
{
    strtype a(" Hello "), b(" There ");
    show (a);
    show (b);
    return 0;
}