# include <iostream>
using namespace std;
int dif (int a, int b)
{
    return a-b;
}
float dif( float a, float b)
{
    return a-b;
}
int main ()
{
    int (* p1)(int , int);
    float (* p2)(float , float );
    p1 = dif ; // address of dif (int , int )
    p2 = dif ; // address of dif (float , float )
    cout << p1 (10 , 5) << ' ';
    cout << p2 (10.5 , 8.9) << '\n';
    return 0;
}