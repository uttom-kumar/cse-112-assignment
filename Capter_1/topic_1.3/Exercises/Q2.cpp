/*
    Write a program that converts feet to inches. Prompt the user for feet and display the equivalent
    number of inches. Have your program repeat this process until the user enters 0 for the number of feet.
 */

#include <iostream>
using namespace std;

int main() {
    double feet;
    double result;
    cout << "How many feet convert to inchi ?: " << endl;
    cin >> feet;
    if (feet <= 0) {
        cout << "Feet is too small." << endl;
    }
    else {
        result = feet*12.00;
        cout <<"Total Inchi is = " <<result << endl;
    }
    return 0;
}