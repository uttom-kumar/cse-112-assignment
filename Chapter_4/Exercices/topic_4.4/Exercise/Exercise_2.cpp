# include <iostream>
# include <cstring>
using namespace std;
class phone
{
    char name [40];
    char number [14];
public :
void store ( char *n, char *num );
    void show ();
};
void phone :: store ( char *n, char *num )
{
    strcpy (name , n);
    strcpy ( number , num);
}
void phone :: show ()
{
    cout << name << ": " << number ;
    cout << "\n";
}
int main ()
{
    phone *p;
    p = new phone ;
    if (!p)
    {
        cout << " Allocation error .";
        return 1;
    }
    p-> store (" Isaac Newton ", " 111 555 -2323 ");
    p-> show ();
    delete p;
    return 0;
}