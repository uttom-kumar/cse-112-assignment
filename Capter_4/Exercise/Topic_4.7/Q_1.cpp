//
// Created by USER on 4/9/2026.
//
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype
{
    char *p;

public:
    strtype(char *s)
    {
        int l = strlen(s) + 1;
        p = new char[l];
        if (!p)
            exit(1);
        strcpy(p, s);
    }

    ~strtype()
    {
        cout << "Freeing memory...\n";
        delete[] p;
    }

    char *get() { return p; }
};

void show(strtype &x)
{
    char *s;
    s = x.get();
    cout << s << "\n";
}

int main()
{
    strtype obj1("Hello");
    strtype obj2("There");

    show(obj1);
    show(obj2);

    return 0;
}