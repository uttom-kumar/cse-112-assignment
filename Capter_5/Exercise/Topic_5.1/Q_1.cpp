# include <iostream>
# include <cstring>
# include <cstdlib>
using namespace std;
class strtype
{
    char *p;
    int len ;
public :
strtype ();
    strtype ( char *s, int l);
    char * getstring () { return p; }
    int getlength () { return len; }
};
strtype :: strtype ()
{
    p = new char [255];
    if (!p)
    {
        cout << " Allocation error \n";
        exit (1) ;
    }
    *p = '\0' ; // null string 
    len = 255;
}
strtype :: strtype ( char *s, int l)
{
    if( strlen (s) >= l)
    {
        cout << " Allocating too little memory !\n";
        exit (1) ;
    }
    p = new char [l];
    if (!p)
    {
        cout << " Allocation error \n";
        exit (1) ;
    }
    strcpy (p, s);
    len = l;
}
int main ()
{
    strtype s1;
    strtype s2(" This is a test ", 100) ;
    cout << "s1: " << s1. getstring () << " - Length : ";
    cout << s1. getlength () << '\n';
    cout << "s2: " << s2. getstring () << " - Length : ";
    cout << s2. getlength () << '\n';
    return 0;
}