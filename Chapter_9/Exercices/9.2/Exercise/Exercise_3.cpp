# include <iostream>
# include <fstream>
# include <cctype>
using namespace std;
int main (int argc , char * argv []) {
    if( argc !=2)
    {
        cout << " Usage : COUNT <input >\n";
        return 1;
    }
    ifstream in( argv [1]) ;
    if (! in)
    {
        cout << " Cannot open input file .\n";
        return 1;
    }
    int count = 0;
    char ch;
    in >> ch; // find first non - space char
    // after first non - space found , do not skip spaces
    in. unsetf (ios :: skipws ); // do not skip spaces
    while (! in.eof ())
    {
        in >> ch;
        if( isspace (ch))
        {
            count ++;
            while ( isspace (ch) && !in.eof ())
                in >> ch;

        }
    }
    cout << " Word count : " << count << '\n';
    in. close ();
    return 0;
}