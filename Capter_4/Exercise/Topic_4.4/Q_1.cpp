//
// Created by USER on 4/9/2026.
//
//
// Created by USER on 4/9/2026.
//
#include <iostream>
using namespace std;

int main()
{
    float *fPtr;
    long *lPtr;
    char *cPtr;
    fPtr = new float;
    lPtr = new long;
    cPtr = new char;
    *fPtr = 181.6;
    *lPtr = 76674643L;
    *cPtr = 'U';
    cout << "Float value: " << *fPtr << endl;
    cout << "Long value : " << *lPtr << endl;
    cout << "Char value : " << *cPtr << endl;
    delete fPtr;
    delete lPtr;
    delete cPtr;

    return 0;
}