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
    ifstream in( argv [1] , ios :: in | ios :: binary );
    if (! in)
    {
        cout << " Cannot open input file .\n";
        return 1;
    }
    int count = 0;
    char ch;
    // find first non - space char
    do
    {
        in.get (ch);
    }
    while ( isspace (ch));
    while (! in.eof ())
    {
        in.get (ch);
        if( isspace (ch))
        {
            count ++;
            while ( isspace (ch) && !in.eof ())
                in.get (ch); // find next word
        }
    }
    cout << " Word count : " << count << '\n';
    in. close ();
    return 0;
}