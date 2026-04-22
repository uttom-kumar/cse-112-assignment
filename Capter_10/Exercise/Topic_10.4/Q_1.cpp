#include <iostream>
#include <cstdlib>
using namespace std;

// Base class
class list {
protected:
    struct node {
        int num;
        node* next;
    };

    node* head;
    node* tail;

public:
    list() { head = tail = NULL; }
    virtual void store(int i) = 0;
    virtual int retrieve() = 0;

    virtual ~list() {
        while (head) {
            node* p = head;
            head = head->next;
            delete p;
        }
    }
};

// Queue (FIFO)
class queue : public list {
public:
    void store(int i) {
        node* item = new node;
        item->num = i;
        item->next = NULL;

        if (tail)
            tail->next = item;

        tail = item;

        if (!head)
            head = tail;
    }

    int retrieve() {
        if (!head) {
            cout << "Queue empty\n";
            return 0;
        }

        int i = head->num;
        node* p = head;
        head = head->next;

        if (!head) tail = NULL;

        delete p;
        return i;
    }
};

// Stack (LIFO)
class stack : public list {
public:
    void store(int i) {
        node* item = new node;
        item->num = i;

        item->next = head;
        head = item;

        if (!tail)
            tail = head;
    }

    int retrieve() {
        if (!head) {
            cout << "Stack empty\n";
            return 0;
        }

        int i = head->num;
        node* p = head;
        head = head->next;

        if (!head) tail = NULL;

        delete p;
        return i;
    }
};

// Sorted list (ascending)
class sorted : public list {
public:
    void store(int i) {
        node* item = new node;
        item->num = i;
        item->next = NULL;

        node* p = head;
        node* prev = NULL;

        while (p && p->num < i) {
            prev = p;
            p = p->next;
        }

        if (!prev) { // insert at beginning
            item->next = head;
            head = item;
            if (!tail) tail = item;
        } else {
            item->next = p;
            prev->next = item;
            if (!p) tail = item;
        }
    }

    int retrieve() {
        if (!head) {
            cout << "List empty\n";
            return 0;
        }

        int i = head->num;
        node* p = head;
        head = head->next;

        if (!head) tail = NULL;

        delete p;
        return i;
    }
};

int main() {
    queue q;
    stack s;
    sorted sl;

    // Queue test
    q.store(10);
    q.store(20);
    cout << "Queue: " << q.retrieve() << " " << q.retrieve() << endl;

    // Stack test
    s.store(10);
    s.store(20);
    cout << "Stack: " << s.retrieve() << " " << s.retrieve() << endl;

    // Sorted list test
    sl.store(30);
    sl.store(10);
    sl.store(20);

    cout << "Sorted: ";
    cout << sl.retrieve() << " ";
    cout << sl.retrieve() << " ";
    cout << sl.retrieve() << endl;

    return 0;
}