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
        p = new char[len];   // FIXED
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

    // Output operator
    friend ostream& operator<<(ostream &stream, const strtype &ob);

    // Input operator
    friend istream& operator>>(istream &stream, strtype &ob);
};

// << operator
ostream& operator<<(ostream &stream, const strtype &ob) {
    stream << ob.p;
    return stream;
}

// >> operator
istream& operator>>(istream &stream, strtype &ob) {
    char temp[1000];  // safer buffer

    stream >> temp;

    if (strlen(temp) + 1 > ob.len) {
        delete[] ob.p;
        ob.len = strlen(temp) + 1;
        ob.p = new char[ob.len];

        if (!ob.p) {
            cout << "Allocation error\n";
            exit(1);
        }
    }

    strcpy(ob.p, temp);
    return stream;
}

int main() {
    strtype s1("This is a test."), s2("I like C++.");

    cout << s1 << '\n' << s2 << '\n';

    cout << "\nEnter a string: ";
    cin >> s1;

    cout << "You entered: " << s1 << '\n';

    return 0;
}