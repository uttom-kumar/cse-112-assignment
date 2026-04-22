//
// Created by USER on 4/9/2026.
//

#include <iostream>
#include <cstring>
using namespace std;

class PersonInfo
{
    char name[30];
    char phone[20];

public:
    void set(char *n, char *p)
    {
        strcpy(name, n);
        strcpy(phone, p);
    }

    void display()
    {
        cout << "Name: " << name << " | Phone: " << phone << endl;
    }
};

int main()
{
    PersonInfo *ptr;

    ptr = new PersonInfo;

    if (!ptr)
    {
        cout << "Allocation Error\n";
        return 1;
    }

    ptr->set("M.Uzzol Hossain", "01788254006");
    ptr->display();

    delete ptr;

    return 0;
}
