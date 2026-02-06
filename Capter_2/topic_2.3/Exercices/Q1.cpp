#include <iostream>
using namespace std;

// Base class
class Area_cl {
public:
    double height;
    double width;
};

// derived rectangle class
class rectangle : public Area_cl {
public:
    rectangle(double h, double w) {
        height = h;
        width = w;
    }

    double area() {
        return height * width;
    }
};

//  derived Isosceles Triangle class
class isosceles : public Area_cl {
public:
    isosceles(double h, double w) {
        height = h;
        width = w;
    }

    double area() {
        return 0.5 * height * width;
    }
};

int main() {
    rectangle r(10, 5);
    isosceles t(10, 6);

    cout << "Rectangle area = " << r.area() << endl;
    cout << "Isosceles triangle area = " << t.area() << endl;

    return 0;
}