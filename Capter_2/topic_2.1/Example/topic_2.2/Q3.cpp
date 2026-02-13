/*
* Here is a different way to implement the strtype class (developed earlier) that uses a
parameterized constructor function
 */

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
    char *p;
    int len;

public:
    strtype(char *ptr);  // parameterized constructor
    ~strtype();          // destructor
    void show();
};

// Constructor: allocate memory and initialize string
strtype::strtype(char *ptr) {
    len = strlen(ptr);
    p = (char *) malloc(len + 1);  // +1 for null character
    if (!p) {
        cout << "Allocation error\n";
        exit(1);
    }
    strcpy(p, ptr);
}

// Destructor: free allocated memory
strtype::~strtype() {
    cout << "Freeing p\n";
    free(p);
}

// Display string and its length
void strtype::show() {
    cout << p << " - length: " << len << "\n";
}

int main() {
    strtype s1("This is a test."), s2("I like C++.");
    s1.show();
    s2.show();
    return 0;
}
