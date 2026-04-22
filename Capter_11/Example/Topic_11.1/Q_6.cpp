# include <iostream >
using namespace std;
// This is a function template .
template <class X> void swapargs (X &a, X &b)
{
X temp ;
temp = a;
a = b;
b= temp ;
}
// This overrides the generic version of swapargs ().
void swapargs (int a, int b)
{
cout << " this is inside swapargs (int ,int )\n";
}
int main ()
{
int i=10 , j =20;
float x=10 , y =23.3;
cout << " Original i, j: " << i << endl; << j << endl ;
cout << " Original x, y: " << x << endl; << y << endl ;
swapargs (i, j); // calls overloaded swapargs ()
swapargs (x, y); // swap floats
cout << " Swapped i, j: " << i << endl;<< j << endl ;
cout << " Swapped x, y: " << x << endl;<< y << endl ;
return 0;
}