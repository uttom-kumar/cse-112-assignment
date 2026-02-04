/*
 The next program prompts the user for an integer value i, floating point vlue and a string. It then uses one input statement to read all three.
 */

#include <iostream>
using namespace std;

int main () {
    int i;
    float f;
    string s;

    cout << "Enter an integer value , float value and string : ";
    cin >> i >> f >> s;

    cout << "Here's your data : " << endl;
    cout << i << endl;
    cout << f << endl;
    cout << s << endl;
}