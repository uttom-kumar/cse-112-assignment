// Overload the * for ob*int and int *ob.
# include <iostream>
using namespace std;
class coord
{
    int x, y; // coordinate values
public :
coord () { x=0; y=0; }
    coord (int i, int j) { x=i; y=j; }
    void get_xy (int &i, int &j) { i=x; j=y; }
    friend coord operator *( coord ob1 , int i);
    friend coord operator *( int i, coord ob2 );
};
// Overload * one way .
coord operator *( coord ob1 , int i)
{
    coord temp ;
    temp .x = ob1 .x * i;
    temp .y = ob1 .y * i;
    return temp ;
}
// Overload * another way .
coord operator *( int i, coord ob2)
{
    coord temp ;
    temp .x = ob2 .x * i;
    temp .y = ob2 .y * i;
    return temp ;
}
int main ()
{
    coord o1 (10 , 10) , o2;
    int x, y;
    o2 = o1 * 2; // ob * int
    o2. get_xy (x, y);
    cout << "(o1*2) X: " << x << ", Y: " << y << "\n";
    o2 = 3 * o1;
    o2. get_xy (x, y);
    cout << "(3*o1) X: " << x << ", Y: " << y << "\n";
    return 0;
}