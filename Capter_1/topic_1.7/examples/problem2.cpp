#include <iostream>
#include <string>
using namespace std;

// function overloading
void date(char *date)
{
    cout << "Date : " << date << endl;
}

void date(int month, int day, int year)
{
    cout << month << "/" << day << "/" << year << endl;
}

int main()
{
    date("05/02/2026");    // string version
    date(8, 2, 2026);      // int version
    return 0;
}
