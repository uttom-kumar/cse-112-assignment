/*
    Rework the queue class that you developed as an exercise in Chapter 1 by replacing  its initialization
    function with a constructor.
 */

#include <iostream>
using namespace std;

class queue {
    int q[100];
    int head, tail;

public:
    // Constructor replaces the old initialization function
    queue() {
        head = 0;
        tail = 0;
    }

    void enqueue(int num) {
        if ((tail + 1) % 100 == head) {
            cout << "Queue is full!" << endl;
            return;
        }
        q[tail] = num;
        tail = (tail + 1) % 100;
    }

    int dequeue() {
        if (head == tail) {
            cout << "Queue is empty!" << endl;
            return 0;
        }
        int val = q[head];
        head = (head + 1) % 100;
        return val;
    }
};

int main() {
    // The constructor is called automatically
    queue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);

    cout << "Dequeued: " << myQueue.dequeue() << endl;
    cout << "Dequeued: " << myQueue.dequeue() << endl;

    return 0;
}