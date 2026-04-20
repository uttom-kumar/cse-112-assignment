# include <iostream>
# include <ctime>
using namespace std;
// A time and date output manipulator .
ostream &td( ostream & stream )
{
    struct tm * localt ;
    time_t t;
    t = time ( NULL );
    localt = localtime (&t);
    stream << asctime ( localt ) << endl ;
    return stream ;
}
int main ()
{
    cout << td << '\n';
    return 0;
}