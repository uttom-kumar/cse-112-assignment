/*
    Just as there can be public member functions, there can be public member variables as well.For example, if a were declared in the public section
    of myclass, a could be referenced by any part of the program, as shown here :
 */
#include <iostream>
using namespace std;

class myclass {
public:
    int a, b, c;
};

int main() {
    myclass ob1, ob2;

    cout << "Enter 3 numbers : " ;
    cin >> ob1.a >> ob1.b >> ob1.c;

    cout << "Here's your Data : " <<endl;
    cout << "a = " << ob1.a << endl;
    cout << "b = " << ob1.b << endl;
    cout << "c = " << ob1.c << endl;

}