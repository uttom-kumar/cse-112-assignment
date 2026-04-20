# include <iostream>
using namespace std;
template <class X> X mnt(X a, X b)
{
    if(a <= b)
        return a;
    else
        return b;

}
int main ()
{
    cout << mnt (12.2 , 2.0) ;
    cout << endl ;
    cout << mnt (3 , 4);
    cout << endl ;
    cout << mnt ('c', 'a');
    return 0;
}