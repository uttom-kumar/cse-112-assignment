# include <iostream>
# include <iomanip>
# include <cstring>
using namespace std;
void center ( char *s);
int main ()
{
    center ("Hi there !");
    center ("I like C ++.");
    return 0;
}
void center ( char *s)
{
    int len ;
    len = 40+( strlen (s)/2);
    cout << setw (len ) << s << '\n';
}