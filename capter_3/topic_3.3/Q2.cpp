/*
    Other than the incorrect freeing of dynamically allocated memory,
    think of a situation in which it woul be improper to return an object from a function.
 */

#include <iostream>
using namespace std;

class who {
    char id;
public:
    // Constructor with character argument
    who(char c) {
        id = c;
        cout << "Constructing who #" << id << "\n";
    }

    // Destructor to display message when object is destroyed
    ~who() {
        cout << "Destroying who #" << id << "\n";
    }
};

// Function make_who() that returns a who object
who make_who() {
    who temp('X');
    return temp;   // Returning object from function
}

int main() {
    who ob('A');

    // Calling make_who() will cause temporary object creation and destruction
    make_who();

    return 0;
}