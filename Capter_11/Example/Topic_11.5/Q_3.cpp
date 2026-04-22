# include <iostream >
# include <new >
using namespace std;
int main ()
{
double *p;
// this will eventually run out of memory
do
{

p = new( nothrow ) double [100000];
if(p)
cout << " Allocation OK\n";
else
cout << " Allocation Error .\n";

}
while (p);
return 0;
}