/*
* 1. Any type of function can be in-lined, including functions that are member of classes.
For example, here the member function divisible() is in-lined for fast execution. (The
function returns true if its first argument can be evenly divided by its second.)
 */

// Demonstrate in - lining a member function .
# include <iostream>
using namespace std;
class samp
{
    int i, j;
public :
samp (int a, int b);
    int divisible (); // in - lined in its definition
};
samp :: samp (int a, int b)
{
    i = a;
    j = b;
}
/*
Return 1 if i is evenly divisible by j.
This member function is expanded in line .
*/
inline int samp::divisible ()
{
    return !(i%j);
}
int main ()
{
    samp ob1 (10 , 2) , ob2 (10 , 3);
    // this is true
    if(ob1 . divisible ())
        cout << "10 divisible by 2\n";
    // this is false
    if(ob2 . divisible ())
        cout << "10 divisible by 3\n";
    return 0;
}