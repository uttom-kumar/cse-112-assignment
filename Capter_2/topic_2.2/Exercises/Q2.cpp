/*
    Create a class called t_and_d that is passed the current system timr and date as a parameter to its constructor
    when it is created. Have the class include a member function that displays this time and date on the screen.
    (Hint : use tha standard time and date functions found in the standard library to find and display the time adn date.
 */

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