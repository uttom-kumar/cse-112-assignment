#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cout << "Usage: REVERSE <filename>\n";
        return 1;
    }

    ifstream in(argv[1], ios::binary);
    if (!in) {
        cout << "Cannot open input file.\n";
        return 1;
    }

    // Go to end and get size
    in.seekg(0, ios::end);
    long long size = in.tellg();

    // Reverse read
    for (long long i = size - 1; i >= 0; i--) {
        in.seekg(i, ios::beg);
        char ch;
        in.get(ch);
        cout << ch;
    }

    in.close();
    return 0;
}