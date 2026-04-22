
#include <iostream>
using namespace std;

int main()
{

    int *p = new int;
    if (!p)
    {
        cout << "Method 1: Memory allocation failed (Returned NULL)." << endl;
    }
    else
    {
        cout << "Method 2: Memory allocation succeeded." << endl;
    }


    delete p;
    return 0;
}