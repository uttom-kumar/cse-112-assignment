# include <iostream>
# include <cstdlib>

using namespace std;
class dynarray
{
    int *p;
    int size ;
public :
dynarray (int s);
    int &put (int i);
    int get (int i);
    dynarray & operator =( dynarray &ob);
};
// Constructor
dynarray :: dynarray (int s)
{
    p = new int [s];
    if (!p)
    {
        cout << " Allocation error \n";
        exit (1) ;
    }
    size = s;
}
// Store an element .
int & dynarray :: put(int i)
{
    if(i <0 || i >= size )
    {
        cout << " Bounds error !\n";
        exit (1) ;
    }
    return p[i];
}
// Get an element
int dynarray :: get(int i)
{
    if(i <0 || i >= size )
    {
        cout << " Bounds error !\n";
        exit (1) ;
    }
    return p[i];
}
dynarray & dynarray :: operator =( dynarray &ob)
{
    int i;
    if( size != ob. size )
    {
        cout << " Cannot copy arrays of differing size !\n";
        exit (1) ;
    }
    for (i = 0; i< size ; i++)
        p[i] = ob.p[i];
    return * this ;
}
int main ()
{
    int i;
    dynarray ob1 (10) , ob2 (10) , ob3 (100) ;
    ob1 .put (3) = 10;
    i = ob1.get (3);
    cout << i << '\n';
    ob2 = ob1 ;
    i = ob2.get (3);
    cout << i << '\n';
    // generates an error
    ob1 = ob3 ; // !!!
    return 0;
}