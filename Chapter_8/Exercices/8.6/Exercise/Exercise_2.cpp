# include <iostream>
using namespace std;
class factor
{
    int num ; // number
    int lfact ; // lowest factor
public :
factor ( int i);
    friend ostream & operator <<( ostream &stream , factor ob);
    friend istream & operator >>( istream &stream , factor &ob);
};
factor :: factor ( int i)
{
    int n;
    num = i;
    for (n=2; n <(i/2); n++)
        if (!( i%n))
            break ;
    if(n <(i/2) )
        lfact = n;
    else
        lfact = 1;

}
istream & operator >>( istream &stream , factor &ob)
{
    stream >> ob. num;
    int n;
    for (n=2; n <( ob.num /2); n++)
        if (!( ob.num %n))
            break ;
    if(n <( ob.num /2) )
        ob. lfact = n;
    else
        ob. lfact = 1;
    return stream ;
}
ostream & operator <<( ostream &stream , factor ob)
{
    stream << ob. lfact << " is lowest factor of ";
    stream << ob. num << '\n';
    return stream ;
}
int main ()
{
    factor o (32) ;
    cout << o;
    cin >> o;
    cout << o;
    return 0;
}