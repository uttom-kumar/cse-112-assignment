/*
    So far, you have seen overloaded functions that differ in the data types of their arguments.
    However, overloaded functions can also differ in the number of arguments as this example.
    as this example illustrates:
 */

#include <iostream>
using namespace std;

// function overlading
#include <iostream>
using namespace std;

// Function overloading
void sum(int a, int b)
{
    int c = a + b;
    cout << "Sum of two numbers = " << c << endl;
}

void sum(int a, int b, int c)
{
    int d = a + b + c;
    cout << "Sum of three numbers = " << d << endl;
}

int main()
{
    int a, b, c;
    char choice;

    cout << "Do you want to enter 2 or 3 numbers? (2/3): ";
    cin >> choice;

    if (choice == '2') {
        cout << "Enter two numbers: ";
        cin >> a >> b;
        sum(a, b);  // Calls 2-parameter sum
    }
    else if (choice == '3') {
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
        sum(a, b, c);  // Calls 3-parameter sum
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}


