#include <iostream>
using namespace std;

template <class X>
class input {
    X data;

public:
    input(const char *s, X min, X max);
};

// Constructor definition
template <class X>
input<X>::input(const char *s, X min, X max) {
    do {
        cout << s << ": ";
        cin >> data;
    } while (data < min || data > max);
}

int main() {
    input<int> i("Enter int (0-10)", 0, 10);
    input<char> c("Enter char (A-Z)", 'A', 'Z');

    return 0;
}