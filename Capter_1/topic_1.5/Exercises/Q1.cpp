/*
    If you have not node so, enter and run the programs shown in the example for this section.
 */
#include <iostream>
using namespace std;

class myclass {
private:
    string name;
    string id;

public:
    myclass(string n, string i) {
        name=n;
        id=i;
    }

    void print() {
        cout<<"Name is : "<<name<<endl;
        cout<<"ID is : "<<id<<endl;
    }
};

int main() {
    myclass uttom("Uttom kumar","2025403111");
    uttom.print();

}