# include <iostream>
using namespace std;

void rneg (int &i); // reference version

void pneg (int *i); // pointer version

int main ()
{
    int i = 10;
    int j = 20;
    rneg (i);
    pneg (&j);
    cout << i << ' ' << j << '\n';
    return 0;
}
// using a reference parameter
void rneg (int &i)
{
    i = -i;
}
// using a pointer parameter
void pneg (int *i)
{
    *i = -*i;
}