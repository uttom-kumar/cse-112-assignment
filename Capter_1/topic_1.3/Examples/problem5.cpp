/*
    By default, when you use >>, all input is line buffered. This means that no information is passed to your c++ program until
    you press ENTER . (In c, the scanf() function is line buffered, so this style of input should not be new to you.) To see the
    effect of line-buffered input, tyr this program :
 */

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";

    cin >> num;   // waits until ENTER is pressed

    cout << "You entered: " << num << endl;

    return 0;
}
