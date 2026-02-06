/*
    The C++ standard library contains these three functions :
    double atof(const char *s);
    int atoi(const *s);
    long atol(const *s);
    These functions return the numeric value contained in the string pointed to by s. Specifically, atof()
    return double, atoi() return an  integer, and atol() returns a long . Why is it not possible to overload
    these functions?
*/
#include <iostream>
using namespace std;

double atof(const char *s)
{
    return atoi(s);
}

int atoi(const char *s)
{
    return atoi(s);
}

int main()
{
    cout << "String 1 : " << atof("123545") << endl;
    // cout << "String 2 : " << atoi("452558") << endl;
}