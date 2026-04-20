# include <iostream>
using namespace std;
class planet
{
protected :
double distance ; // miles from the sun
    int revolve ; // in days
public :
planet ( double d, int r) { distance = d; revolve = r; }
};
class earth : public planet
{
    double circumference ; // circumference of orbit
public :
earth ( double d, int r) : planet (d, r)
{
    circumference = 2* distance *3.1416;
}
    friend ostream & operator <<( ostream &stream , earth ob);
};
ostream & operator <<( ostream &stream , earth ob)
{
    stream << " Distance from sun : " << ob. distance << '\n';
    stream << " Days in orbit : " << ob. revolve << '\n';
    stream << " Circumference of orbit : ";
    stream << ob. circumference << '\n';
}

int main() {

    earth ob (93000000 , 365) ;
    cout << ob;
    return 0;



}