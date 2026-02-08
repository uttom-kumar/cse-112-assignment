/*
    Besides the problem of freeing dynamically allocated memory, returning an
    object from a function can be improper if the object controls a specific
    system resource, such as an open file handle or a hardware lock.
    The destructor of the temporary object created during the return might
    close or release that resource prematurely, leaving the original object
    in an invalid state.
*/

#include <iostream>
using namespace std;

class who {
    char id;
public:
    who(char c) {
        id = c;
        cout << "Constructing who #" << id << endl;
    }
    ~who() {
        cout << "Destroying who #" << id <<endl;
    }
};


who make_who() {
    who temp('X');
    return temp;
}

int main() {
    who ob = make_who();
    return 0;
}