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