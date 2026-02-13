/*
2. Here is an example that shows the need for both a constructor and a destructor function.
It creates a simple string class, called strtype, that contains a string and its length. When
a strtype object is created, memory is allocated to hold the string and its initial length
is set to 0. When strtype object is destroyed, that memory is released.
 */

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

#define SIZE 25

class strtype {
    char *p;
    int len;
public:
    strtype();      // constructor
    ~strtype();     // destructor
    void set(char *ptr);
    void show();
};

// Constructor: Initialize string object
strtype::strtype() {
    p = (char *) malloc(SIZE);
    if (!p) {
        cout << "Allocation error\n";
        exit(1);
    }
    *p = '\0';
    len = 0;
}

// Destructor: Free memory when destroying object
strtype::~strtype() {
    cout << "Freeing p\n";
    free(p);
}

// Set string and its length
void strtype::set(char *ptr) {
    if (strlen(ptr) >= SIZE) {
        cout << "String too big\n";
        return;
    }
    strcpy(p, ptr);
    len = strlen(p);
}

// Display string and length
void strtype::show() {
    cout << p << " - length: " << len << "\n";
}

int main() {
    strtype s1, s2;

    s1.set("This is a test.");
    s2.set("I like C++.");

    s1.show();
    s2.show();

    return 0;
}
