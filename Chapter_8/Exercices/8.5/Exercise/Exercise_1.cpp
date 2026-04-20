#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
    char *p;
    int len;

public:
    // Constructor
    strtype(const char *ptr) {
        len = strlen(ptr) + 1;
        p = new char[len];   // FIXED: array allocation
        if (!p) {
            cout << "Allocation error\n";
            exit(1);
        }
        strcpy(p, ptr);
    }

    // Copy Constructor
    strtype(const strtype &ob) {
        len = ob.len;
        p = new char[len];
        if (!p) {
            cout << "Allocation error\n";
            exit(1);
        }
        strcpy(p, ob.p);
    }

    // Destructor
    ~strtype() {
        delete[] p;
    }

    // Assignment Operator
    strtype& operator=(const strtype &ob) {
        if (this == &ob)
            return *this;

        delete[] p;

        len = ob.len;
        p = new char[len];
        if (!p) {
            cout << "Allocation error\n";
            exit(1);
        }

        strcpy(p, ob.p);
        return *this;
    }

    // Friend Output Operator
    friend ostream& operator<<(ostream &stream, const strtype &ob);
};

// Output operator
ostream& operator<<(ostream &stream, const strtype &ob) {
    stream << ob.p;
    return stream;
}

int main() {
    strtype s1("This is a test."), s2("I like C++.");

    cout << s1 << '\n' << s2 << '\n';

    return 0;
}