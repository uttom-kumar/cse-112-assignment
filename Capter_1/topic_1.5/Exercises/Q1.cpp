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
    myclass uzzol("M.uzzol Hossain","2025403124");
    uzzol.print();

}