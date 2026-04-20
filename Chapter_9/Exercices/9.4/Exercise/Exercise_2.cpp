# include <iostream>
# include <fstream>
using namespace std;
int main (int argc , char * argv []) {
    if( argc !=2)
    {
        cout << " Usage : PR <filename >\n";
        return 1;
    }
    ifstream in( argv [1]) ;
    if (! in)
    {
        cout << " Cannot open input file .\n";
        return 1;
    }
    char str [255];
    while (! in.eof ())
    {
        in. getline (str , 254) ;
        cout << str << '\n';
    }
    in. close ();
    return 0;
}