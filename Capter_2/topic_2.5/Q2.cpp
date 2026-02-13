/*
*  Here is an example that used a union to display the binary bit pattern, byte by byte,
contained within a double value.
 */
#include <iostream>
using namespace std;

union bits {
    double d;
    unsigned char c[sizeof(double)];

    // Constructor
    bits(double n) {
        d = n;
    }

    void show_bits() {
        int i, j;
        for (j = sizeof(double) - 1; j >= 0; j--) {
            cout << "Bit pattern in byte " << j << ": ";
            for (i = 128; i; i >>= 1) {
                if (i & c[j])
                    cout << "1";
                else
                    cout << "0";
            }
            cout << "\n";
        }
    }
};

int main() {
    bits ob(1991.829);
    ob.show_bits();
    return 0;
}
