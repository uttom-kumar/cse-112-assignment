/*
    As an experiment, determine whether this comment (which nests a C-like comment within a C++ style , single-line comment)
    is valid :
 */

#include <iostream>
using namespace std;

int main() {

    // This is a single-line comment /* nested C-style comment */

    cout << "// This is a single-line comment /* nested C-style comment */" << endl;

    return 0;
}
