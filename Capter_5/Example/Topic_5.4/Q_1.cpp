//
// Created by USER on 4/15/2026.
//
# include <iostream >
using namespace std;
void f(int a=0 , int b=0)
{
    cout << "a: " << a << ", b: " << b;
    cout << endl;
}
int main ()
{
    f();
    f (10) ;
    f(10 , 99);
    return 0;# include <iostream >
    using namespace std;
    // Return area of a non - square rectangle .
    double rect_area ( double length , double width )
    {
        return length * width ;
    }
    // Return area of a square
    134

    FUNCTION OVERLOADING
    5.4. USING DEFAULT ARGUMENTS

    double rect_area ( double length )
    {
        return length * length ;
    }
    int main ()
    {
        cout << "10 x 5.8 rectangle has area : ";
        cout << rect_area (10.0 , 5.8) << endl;
        cout << "10 x 10 square has area : ";
        cout << rect_area (10.0) << endl;
        return 0;
    }