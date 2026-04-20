# include <iostream>
using namespace std;
int main ()
{
    ios :: fmtflags f;
    f = cout . flags (); // store flags
    cout . unsetf (ios :: dec );
    cout . setf (ios :: showbase | ios :: hex );
    cout << 100 << '\n';
    cout . flags (f); // reset flags
    return 0;
}