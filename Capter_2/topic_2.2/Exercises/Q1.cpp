
#include <iostream>
using namespace std;

class stack {
    int *p;      // Pointer to the stack array
    int tos;
    int size;

public:

    stack(int s) {
        size = s;
        p = new int[size];   // Dynamic memory allocation
        tos = 0;
        cout << "Stack of size " << size << " created." << endl;
    }


    ~stack() {
        delete[] p;
        cout << "Stack destroyed and memory freed." << endl;
    }

    // Push function
    void push(int i) {
        if (tos == size) {
            cout << "Stack is full." << endl;
            return;
        }
        p[tos] = i;
        tos++;
    }

    // Pop function
    int pop() {
        if (tos == 0) {
            cout << "Stack is empty." << endl;
            return 0;
        }
        tos--;
        return p[tos];
    }
};

int main() {

    stack s1(5), s2(10);


    s1.push(1);
    s1.push(2);

    cout << "Popped from s1: " << s1.pop() << endl;
    cout << "Popped from s1: " << s1.pop() << endl;

    return 0;
}