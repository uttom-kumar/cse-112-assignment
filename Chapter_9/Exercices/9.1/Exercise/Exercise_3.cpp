# include <iostream>
using namespace std;
// Skip 10 characters .
istream & skipchar ( istream & stream )
{
    int i;
    char c;
    for (i=0; i <10; i++)
        stream >> c;
    return stream ;
}
int main ()
{
    char str [80];
    cout << " Enter some characters : ";
    cin >> skipchar >> str;
    cout << str << '\n';
    return 0;
}