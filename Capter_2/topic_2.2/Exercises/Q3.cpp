/*
    Create a class called box whose constractor function is passed three double values, each of which represents
    the length of one side of a box. Have the box class compute the volume of the box and store the result in a
    double variable. Include a member function called vol() that displays the volume of each box object.
 */

#include <iostream>
using namespace std;

class box {
    double volume;

public:

    box(double length, double width, double height) {
        volume = length * width * height; // Calculate volume
    }

    box() {
        cout<<"calling destructor"<<endl;
    }

    void vol() {
        cout << "Volume of the box is =  " << volume << endl;
    }
};

int main() {

    double length;
    cout << "Enter the length of the box: ";
    cin >> length;
    double width;
    cout << "Enter the width of the box: ";
    cin >> width;
    double height;
    cout << "Enter the height of the box: ";
    cin >> height;
    box myBox(length, width,height);
    myBox.vol();

    return 0;
}