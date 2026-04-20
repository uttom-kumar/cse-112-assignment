# include <iostream>
using namespace std;
// Turn on hex output with uppercase X.
ostream & sethex ( ostream & stream )
{
    stream . unsetf ( ios :: dec | ios :: oct );
    stream . setf ( ios :: hex | ios :: uppercase |

    ios :: showbase );

    return stream ;
}
// Reset flags .
ostream & reset ( ostream & stream )
{
    stream . unsetf ( ios :: hex | ios :: uppercase |

    ios :: showbase );
    stream . setf ( ios :: dec);
    return stream ;
}
int main () {
    cout << sethex << 100 << '\n';
    cout << reset << 100 << '\n';

    return 0;
}