#include <iostream>
#include <vector>
using namespace std;

class Array2D {
    int rows, cols;
    vector<int> data;

public:
    // Constructor
    Array2D(int r, int c) : rows(r), cols(c), data(r * c) {}

    // Put value (returns reference so you can assign)
    int& put(int i, int j) {
        if (i < 0 || i >= rows || j < 0 || j >= cols) {
            cout << "Bounds error!!!\n";
            exit(1);
        }
        return data[i * cols + j];
    }

    // Get value
    int get(int i, int j) const {
        if (i < 0 || i >= rows || j < 0 || j >= cols) {
            cout << "Bounds error!!!\n";
            exit(1);
        }
        return data[i * cols + j];
    }
};

int main() {
    Array2D a(2, 3);

    // Assign values
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            a.put(i, j) = i * j;

    // Print values
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++)
            cout << a.get(i, j) << " ";
        cout << endl;
    }

    // Intentional out-of-bounds test
    a.put(10, 10);

    return 0;
}