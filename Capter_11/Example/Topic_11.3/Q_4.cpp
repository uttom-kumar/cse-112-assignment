# include <iostream >
using namespace std;
// A try / catch can be inside a function other than main ().
void Xhandler (int test )
{
try
{
if( test )
throw test ;

}
catch (int i)
{
cout << " Caught One ! Ex , #: " << i << ;
}
}
int main ()
{
cout << " start \n";
Xhandler (1);
Xhandler (2);

Xhandler (0);
Xhandler (3);
cout << "end ";
return 0;
}