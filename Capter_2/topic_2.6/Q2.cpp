/*
* It is perfectly permissible to in-line an overloaded function. For example, this program
overloads min() three ways. Each way is also declared as inline.
 */
# include <iostream>
using namespace std;
// Overload min () three ways .
// integers
inline int min( int a, int b)
{
 return a<b ? a : b;
}
// longs
inline long min( long a, long b)
{
 return a<b ? a : b;
}
// doubles
inline double min( double a, double b)
{
 return a<b ? a : b;
}
int main ()
{
 cout << min ( -10 , 10) << "\n";
 cout << min ( -10.0 , 100.002) << "\n";
 cout << min ( -10L, 12L) << "\n";
 return 0;
}