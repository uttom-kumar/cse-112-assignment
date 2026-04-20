#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream pout("phone.txt");   // FIXED: clean filename

    if (!pout) {
        cout << "Cannot open phone.txt file.\n";
        return 1;
    }

    pout << "Isaac Newton 415 555-3423\n";
    pout << "Robert Goddard 213 555-2312\n";
    pout << "Enrico Fermi 202 555-1111\n";

    pout.close();  // optional but good practice

    cout << "Data written successfully.\n";

    return 0;
}