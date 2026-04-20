#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
    char *p;
    int len;

public:
    // Constructor
    strtype(const char *s) {
        len = strlen(s) + 1;
        p = new char[len];
        if (!p) {
            cout << "Allocation error\n";
            exit(1);
        }
        strcpy(p, s);
    }

    // Copy Constructor (FIXED)
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
        cout << "Freeing " << (void*)p << '\n';
        delete[] p;
    }

    // Assignment Operator
    strtype& operator=(const strtype &ob) {
        if (this == &ob)
            return *this;

        if (len < ob.len) {
            delete[] p;
            p = new char[ob.len];
            if (!p) {
                cout << "Allocation error\n";
                exit(1);
            }
        }

        len = ob.len;
        strcpy(p, ob.p);

        return *this;
    }

    // Index Operator
    char& operator[](int i) {
        if (i < 0 || i >= len - 1) { // avoid '\0'
            cout << "Index " << i << " out of bounds\n";
            exit(1);
        }
        return p[i];
    }

    // Getter
    char* get() { return p; }
};

int main() {
    strtype a("Hello"), b("There");

    cout << a.get() << '\n';
    cout << b.get() << '\n';

    a = b; // assignment
    cout << a.get() << '\n';
    cout << b.get() << '\n';

    // Copy constructor test
    strtype c = a;
    cout << c.get() << '\n';

    // Index access
    cout << a[0] << a[1] << a[2] << '\n';

    // Modify using []
    a[0] = 'X';
    a[1] = 'Y';
    a[2] = 'Z';

    cout << a.get() << '\n';

    return 0;
}