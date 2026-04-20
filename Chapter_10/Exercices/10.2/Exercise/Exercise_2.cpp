# include <iostream>
using namespace std;
class dist
{
public :
double d;
    dist ( double f) { d = f; }
    virtual void trav_time ()
    {
        cout << " Travel time at 60 mph : ";
        cout << d / 60 << '\n';
    }
};
class metric : public dist
{
public :
metric ( double f) : dist (f) {}
    void trav_time ()
{
    cout << " Travel time at 100 kph : ";
    cout << d / 100 << '\n';
}
};
int main () {
    dist *p, mph (88.0) ;
    metric kph (88) ;
    p = &mph;
    p-> trav_time ();
    p = &kph;
    p-> trav_time ();
    return 0;
}