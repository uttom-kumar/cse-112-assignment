# include <iostream>
using namespace std;
class coord
{
    int x, y; // coordinate values
public :
coord () { x=0; y=0; }
    coord (int i, int j) { x=i; y=j; }
    void get_xy (int &i, int &j) { i=x; j=y; }
    coord operator +( coord ob2); // binary plus
    coord operator +(); // unary plus
};
// Overload + relative to coord class .
coord coord :: operator +( coord ob2)
{
    coord temp ;
    temp .x = x + ob2 .x;
    temp .y = y + ob2 .y;
    return temp ;
}
// Overload unary + for coord class .
coord coord :: operator +()
{
    if(x <0)
        x = -x;
    if(y <0)
        y = -y;
    return * this ;
}
int main ()
{
    coord o1 (10 , 10) , o2( -2 , -2);
    int x, y;
    o1 = o1 + o2; // addition
    o1. get_xy (x, y);
    cout << "(o1 + o2) X: " << x << ", Y: " << y << "\n";
    o2 = +o2; // absolute value
    o2. get_xy (x, y);
    cout << "(+o2) X: " << x << ", Y: " << y << "\n";
    return 0;
}