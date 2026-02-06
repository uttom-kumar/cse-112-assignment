/*
    Create a class called stopwatch that emulates a stopwatch that keeps track of elapsed time. Use
    a constructor to initially set the elapsed time to 0. Provide two member function called start()
    and stop() that turn on and off the timer, respectively. Include a member function called show()
    that displays the elapsed time. Also have the destructor function automatically display elapsed
    time when a stopwatch object is destroyed. (To simplify, report the time in seconds.)
 */

#include <iostream>
using namespace std;
#include <ctime>

class Stopwatch {
private:
    double begin;
    double end;
    double elapsed;
public:
    Stopwatch() {
        elapsed = 0.0;
    }
    ~Stopwatch() {
        cout<<endl<<"Stopwatch destroyed .final time: "<<elapsed <<" SECONDS"<<endl;
    }
    void start() {
        begin = clock(); // time strat sir
    }
    void stop() {
        end = clock();
        elapsed = (end - begin) / CLOCKS_PER_SEC;
    }
    void display() {
        cout<<"elapsed time: "<<elapsed<< "  Seconds"<<endl;
    }
};

int main() {
    Stopwatch sw;
    string key;
    cout<<"Enter strat key: ";
    cin>>key;
    sw.start();
    cout<<"Enter stop key"<<endl;
    cin>>key;
    sw.stop();
    sw.display();
    return 0;

}