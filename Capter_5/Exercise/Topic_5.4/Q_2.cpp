#include <iostream>
using namespace std;

// Move cursor
void gotoxy(int x, int y) {
    cout << "\033[" << y << ";" << x << "H";
}

// Clear line (full or partial)
void myclreol(int len = -1) {
    if (len == -1) {
        // Clear entire line
        cout << "\033[K";
    } else {
        // Clear specific number of characters
        for (int i = 0; i < len; i++)
            cout << ' ';
    }
}

int main() {
    // Fill screen
    for (int i = 0; i < 24; i++)
        cout << "abcdefghijklmnopqrstuvwxyz1234567890\n";

    // Move and clear
    gotoxy(1, 2);
    myclreol();     // clear whole line

    gotoxy(1, 4);
    myclreol(20);   // clear first 20 chars

    return 0;
}