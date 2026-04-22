//
// Created by USER on 4/15/2026.
//
/*
This program creates a " safe " array class . Since space
for the array is dynamically allocated , a copy constructor
is provided to allocate memory when one array object is
used to initialize another .
*/
# include <iostream >
# include <cstdlib >
using namespace std;
class array
{
    int *p;
    int size ;
public :
array (int sz) // constructor
{
    p = new int[sz ];
    if (!p)
        exit (1) ;
    size = sz;
    cout << " Using ’normal ’ constructor \n";

    126

    FUNCTION OVERLOADING
    5.2. CREATING AND USING A COPY CONSTRUCTOR

    }
    ~ array () { delete [] p; }
    // copy constructor
    array ( const array &a);
    void put (int i, int j)
    {
        if(i >=0 && i< size )
            p[i] = j;

    }
    int get (int i)
    {
        return p[i];
    }
};
/*
Copy constructor
In the following , memory is allocated specifically
for the copy , and the address of this memory is assigned
to p. Therefore , p is not pointing to the same
dynamically allocated memory as the original object .
*/
array :: array ( const array &a)
{
    int i;
    size = a. size ;
    p = new int[a. size ]; // allocate memory for copy
    if (!p)
        exit (1) ;
    for (i=0; i<a. size ; i++)
        p[i] = a.p[i]; // copy contents
    cout << " Using copy constructor \n";
}
int main ()
{
    array num (10) ; // this calls " normal " constructor
    int i;
    // put some values into the array
    for (i=0; i <10; i++)
        num .put (i, i);
    // display num
    for (i=9; i >=0; i - -)
        cout << num .get (i);
    cout << "\n";



    // create another array and initialize with num
    array x = num; // this invokes copy constructor
    // display x
    for (i=0; i <10; i++)
        cout << x.get (i);
    return 0;
}