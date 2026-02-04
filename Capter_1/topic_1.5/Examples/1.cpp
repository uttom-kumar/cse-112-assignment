/*
    As a simple first example, this program demonstrates myclass, described in the text. If sets the value of a for ob1 and ob2
    and then displays a's value for each object :
 */
#include  <iostream>
using namespace std;


class myclass {
private:
    int a;
public:
    void set_a(int num) {
        a = num;
    }
    void get_a(int num) {
        cout << "a = " << num << endl;
    }
};


int main () {
    myclass ob1, ob2;
    int x,y;

    cout << "Enter two numbers : ";
    cin >> x >> y;


    ob1.set_a(x);
    ob1.set_a(y);

    // here's outputs
    cout << "here's output :" << endl;
    ob2.get_a(x);
    ob2.get_a(y);
}