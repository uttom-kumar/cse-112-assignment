#include <iostream>
#include <cstdlib>
using namespace std;

class array
{
    int size;
    char *p;

public:
    array(int num);
    ~array() { delete[] p; }
    char &put(int i);
    char get(int i);
};

array::array(int num)
{
    p = new char[num];
    if (!p)
        exit(1);
    size = num;
}

char &array::put(int i)
{
    if (i < 0 || i >= size)
    {
        cout << "Bounds error!!!\n";
        exit(1);
    }
    return p[i];
}

char array::get(int i)
{
    if (i < 0 || i >= size)
    {
        cout << "Bounds error!!!\n";
        exit(1);
    }
    return p[i];
}
