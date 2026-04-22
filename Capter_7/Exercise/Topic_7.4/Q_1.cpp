#include <iostream>
using namespace std;

class A {
    int i;
public:
    A(int a) {
        i = a;
        cout << "Constructor A: i = " << i << endl;
    }
};

class B {
    int j;
public:
    B(int b) {
        j = b;
        cout << "Constructor B: j = " << j << endl;
    }
};

class C : public A, public B {
    int k;
public:
    C(int a, int b, int c) : A(a), B(b) {
        k = c;
        cout << "Constructor C: k = " << k << endl;
    }
};

int main() {
    C obj(1, 2, 3);
    return 0;
}