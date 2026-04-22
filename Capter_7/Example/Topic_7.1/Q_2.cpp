//
// Created by USER on 4/16/2026.
//
class base
{
    int x;
public :
void setx (int n) { x = n; }
    void showx () { cout << x << endl; }
};
// Inherit as public - this has an error !
class derived : public base
{
    int y;
public :
void sety (int n) { y = n; }
    /*
    Cannot access private member of base class .
    x is a private member of base and not available
    within derived .
    */
    void show_sum () { cout << x+y << endl; } // Error !
    void showy () { cout << y << endl; }
};