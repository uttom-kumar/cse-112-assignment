/*
    While multiline comments cannot be nested, it is possible to nest a single line comment within a multiline comment. For example
    ,this is perfectly valid :
 */


#include <iostream>
using namespace std;

int main() {

    /*
       This is a multiline comment
       // This single-line comment is inside
       Still part of the multiline comment
    */

    cout << "Hello World" << endl;

    return 0;
}
