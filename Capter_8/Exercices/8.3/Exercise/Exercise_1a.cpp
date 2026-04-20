// Create a table of log10 and log from 2 through 100.
# include <iostream>
# include <iomanip>
# include <cmath>
using namespace std;
int main ()
{
    double x;
    cout . precision (5) ;
    cout << " x log x ln e\n\n";
    for (x = 2.0; x <= 100.0; x++)
    {
        cout << setw (10) << x << ' ';
        cout << setw (10) << log10 (10) << ' ';
        cout << setw (10) << log (x) << '\n';
    }
    return 0;
}