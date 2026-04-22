# include <iostream>
# include <cstdlib>
using namespace std;
double divide ( double a, double b)
{
    try
    {
        if (!b)
            throw (b);

    }
    catch ( double )
    {
        cout << "Cannot divide by zero .\n";
        exit (1) ;
    }
    return a/b;
}
int main () {
    cout << divide (10.0 , 2.5) << endl ;
    cout << divide (10.0 , 0.0) ;
    return 0;
}