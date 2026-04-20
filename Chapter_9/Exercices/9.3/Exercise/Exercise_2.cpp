#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class account {
    int custnum;
    char name[80];
    double balance;

public:
    account(int c, const char *n, double b) {
        custnum = c;
        strcpy(name, n);
        balance = b;
    }

    // Output operator (pass by const reference)
    friend ostream& operator<<(ostream &stream, const account &ob);
};

// << operator
ostream& operator<<(ostream &stream, const account &ob) {
    stream << ob.custnum << ' '
           << ob.name << ' '
           << ob.balance << '\n';
    return stream;
}

int main() {
    account Rex(1011, "Ralph Rex", 12323.34);

    ofstream out("accounts.txt");   // FIXED filename + text mode

    if (!out) {
        cout << "Cannot open output file.\n";
        return 1;
    }

    out << Rex;   // WRITE to file

    out.close();

    cout << "Data written successfully.\n";

    return 0;
}