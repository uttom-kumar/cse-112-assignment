/*
* Both structures and unions can have constructors and destructors. The following example
shows the strtype class reworked as a structure. It contains both a constructor and a
destructor function.
 */

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

struct strtype {
    strtype(char *ptr);   // constructor
    ~strtype();           // destructor
    void show();

private:
    char *p;
    int len;
};

// Constructor: allocate memory and initialize string
strtype::strtype(char *ptr) {
    len = strlen(ptr);
    p = (char *) malloc(len + 1); // +1 for null character
    if (!p) {
        cout << "Allocation error\n";
        exit(1);
    }
    strcpy(p, ptr);
}

// Destructor: free memory
strtype::~strtype() {
    cout << "Freeing p\n";
    free(p);
}

// Display string and length
void strtype::show() {
    cout << p << " - length: " << len << "\n";
}

int main() {
    strtype s1("This is a test."), s2("I like C++");
    s1.show();
    s2.show();
    return 0;
}
