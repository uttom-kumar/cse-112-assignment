#include <iostream>
#include <ctime>
using namespace std;

class t_and_d {
private:
    time_t systime;
public:
    t_and_d(time_t t) {
        systime = t;
    }
    void display() {
        cout<<"Current system time and date: "<<ctime(&systime);
    }

};

int main() {


    t_and_d obj(time(NULL));
    obj.display();
    return 0;

}