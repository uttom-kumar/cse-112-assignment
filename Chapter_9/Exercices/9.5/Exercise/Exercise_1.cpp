# include <iostream>
# include <fstream>
using namespace std;
int main (int argc , char * argv []) {
    if( argc !=2)
    {
        cout << " Usage : REVERSE <filename >\n";
        return 1;
    }
    ifstream in( argv [1] , ios :: in | ios :: binary );
    if (! in)
    {
        cout << " Cannot open input file .\n";
        return 1;
    }
    char ch;
    long i;
    // go to end of file ( less eof char )
    in. seekg (0 , ios :: end );
    i = ( long ) in. tellg (); // see how many bytes in file
    i -= 2; // backup before eof
    for ( ; i >=0; i--)
    {
        in. seekg (i, ios :: beg );
        in.get (ch);
        cout << ch;
    }
    in. close ();
    return 0;
}