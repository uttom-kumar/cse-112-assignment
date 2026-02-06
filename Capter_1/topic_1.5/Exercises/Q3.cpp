/*
    Create a queue class that maintains a circular queue of integers. Makes the queue size 100 integers long.
    Include a short main() function that demonstrates its operation.
 */

#include <iostream>
using namespace std;

class queue {
    int q[100];
    int head, tail;

public:
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
    queue myQueue;
    myQueue.enqueue(100);
    myQueue.enqueue(200);
    myQueue.enqueue(300);
    cout << "Dequeued: " << myQueue.dequeue() << endl;
    cout << "Dequeued: " << myQueue.dequeue() << endl;

    return 0;
}