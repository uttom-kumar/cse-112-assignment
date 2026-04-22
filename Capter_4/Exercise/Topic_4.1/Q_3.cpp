//
// Created by USER on 4/9/2026.
//
#include <iostream>
using namespace std;

class letters
{
    char ch;

public:
    letters(char c) { ch = c; }
    char get_ch() { return ch; }
};

int main()
{
    letters alphabet[10] = {
        letters('A'), letters('B'), letters('C'), letters('D'),
        letters('E'), letters('F'), letters('G'), letters('H'),
        letters('I'), letters('J')};

    cout << "Array contents (Long Form): ";
    for (int i = 0; i < 10; i++)
    {
        cout << alphabet[i].get_ch() << " ";
    }

    cout << endl;
    return 0;
}