# include <iostream>
# include <fstream>
using namespace std;
int main (int argc , char * argv []) {
    if( argc !=3)
    {
        cout << " Usage : CPY <input > <output >\n";
        return 1;
    }
    ifstream fin( argv [1] , ios :: in | ios :: binary ); // open input file
    ofstream fout ( argv [2] , ios :: out | ios :: binary ); // create output file
    if (! fin )
    {
        cout << " Cannot open input file \n";
        return 1;
    }
    if (! fout )
    {
        cout << " Cannot open output file \n";
        return 1;
    }
    char ch;
    unsigned count =0;
    while (! fin.eof ())
    {
        fin .get (ch);
        if (! fin .eof ())
        {
            fout .put (ch);
            count ++;
        }
    }
    cout << " Number of bytes copied : " << count << '\n';
    fin . close ();
    fout . close ();
    return 0;
}