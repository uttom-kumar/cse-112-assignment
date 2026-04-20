# include <iostream>
# include <fstream>
using namespace std;
int main (int argc , char * argv []) {
    if( argc !=2)
    {
        cout << " Usage : SWAP <filename >\n";
        return 1;
    }
    // opne file for input / output
    fstream io( argv [1] , ios :: in | ios :: out | ios :: binary );
    if (! io)
    {
        cout << " Cannot open file .\n";
        return 1;
    }
    char ch1 , ch2 ;
    long i;
    for (i=0; !io.eof (); i +=2)
    {
        io. seekg (i, ios :: beg );
        if (! io. good ())
            return 1;
        io.get (ch1 );
        if(io.eof ())
            continue ;
        io.get (ch2 );
        if (! io. good ())
            return 1;
        if (! io.eof ())
            continue ;
        io. seekg (i, ios :: beg );
        if (! io. good ())
            return 1;
        io.put (ch2 );
        if (! io. good ())
            return 1;
        io.put (ch1 );
        if (! io. good ())
            return 1;

    }
    io. close ();
    if (! io. good ())
        return 1;
    return 0;
}