//
// Created by USER on 4/9/2026.
//
#include <iostream>
using namespace std;

struct NestedLevel
{
    int targetValue;
};

struct ComplexStructure
{
    NestedLevel level2;
};

int main()
{
    ComplexStructure obj;

    obj.level2.targetValue = 50;

    int &ref = obj.level2.targetValue;

    cout << "Original: " << obj.level2.targetValue << endl;

    ref += 10;

    cout << "Updated: " << obj.level2.targetValue << endl;

    return 0;
}
