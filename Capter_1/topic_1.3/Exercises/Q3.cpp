/*
    Here is a C program. Rewrite it so it uses C++ style I/O statements.
    // convert this C program into C++ style. This program computes the lowest common denominator.
 */

#include <iostream>
using namespace std;
int main() {
    int a,b,d,min;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    min = a>b ? b:a;
    for (d=2; d<min; d++)
    {
        if (a%d==0 && b%d==0) {
            break;
        }
        if (d==min) {
            cout<<"No Comon denominators"<<endl;

        }

    }
    cout<<"The lowest denominator is = "<<d<<endl;

    return 0;
}