//
// Created by USER on 4/16/2026.
//
# include <iostream >
using namespace std;
class samp
{
    // private by default
    int a;
protected : // still private relative to samp
int b;
public :
int c;
    samp (int n, int m) { a = n; b = m; }
    int geta () { return a; }
    int getb () { return b; }
};
int main ()
{
    samp ob (10 , 10) ;
    // ob.b = 99; Error ! b is protected and thus private
    ob.c = 30; // OK , c is public
    cout << ob. geta () << " ";
    cout << ob. getb () << " " << ob.c << endl;
    return 0;
}