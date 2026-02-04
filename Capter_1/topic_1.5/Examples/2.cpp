/*
    In myclass form the preceding example, a is privet. This means that only member functions fo myclass can access it directly.
    (This is one reason why the public function get_a() is required.) If you try to access a private member of a class from some part
    of your program that is not a member of that class, a compile-time error will result. For example, assuming that myclass is defined \
    as shown in the preceding example, the following main()function will cause an error :
    */

#include <iostream>
using namespace std;

int main () {
    myclass ob1, ob2;
    ob1.a = 10; //ERROR : cannot access private member
    ob2.a = 20; // by non-member funcions

    cout << ob1.a << endl;
    cout << ob2.a << endl;
}