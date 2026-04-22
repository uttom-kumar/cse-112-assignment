// This example will not work .
# include <iostream >
using namespace std;



int main ()
{
cout << " start \n";
try // start a try block
{
cout << " Inside try block \n";
throw 10; // throw an error
cout << " This will not execute ";
}
catch ( double i) // won ’t work for an int exception
{
cout << " Caught One ! Number is: ";
cout << i << "\n";
}
cout << "end ";
return 0;
}