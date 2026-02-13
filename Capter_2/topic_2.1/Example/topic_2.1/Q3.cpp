/*
3. Here is an interesting way to use an object’s constructor and destructor. This program
uses an object of the timer class to time the interval between when an object of type
timer is created and when it is destroyed. When the object’s destructor is called, the
elapsed time is displayed. You could use an object like this to time the duration of a
program or the length of time a function spends within a block. Just make sure that the
object goes out of scope at the point at which you want the timing interval to end.
 */

#include <iostream>
#include <ctime>
using namespace std;

class timer {
    clock_t start;
public:
    timer();   // constructor
    ~timer();  // destructor
};

// Constructor: start timer
timer::timer() {
    start = clock();
}

// Destructor: stop timer and display elapsed time
timer::~timer() {
    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
    cout << "Elapsed time: " << elapsed << " seconds\n";
}

int main() {
    timer ob; // timer starts here

    char c;
    // some delay: waiting for user input
    cout << "Press a key followed by ENTER: ";
    cin >> c;

    // timer ends automatically when ob goes out of scope
    return 0;
}
