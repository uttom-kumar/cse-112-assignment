#include <iostream>
using namespace std;

class letters {
    char ch;

public:
    letters(char c) {ch = c;}
    char get_ch() {return ch;}
};

int main () {
    letters ob[10] = {
        letters('a'),
        letters('b'),
        letters('c'),
        letters('d'),
        letters('e'),
        letters('f'),
        letters('g'),
        letters('h'),
        letters('i'),
        letters('j'),
    };

    int i;

    for (i = 0; i<10; i++) {
        cout << ob[i].get_ch() << ' ';
    }
    cout << endl;

    return 0;
}