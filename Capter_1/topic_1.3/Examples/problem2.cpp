/* If you are working an older compiler, it might not accept the new style headers and the namespace statements used by this and other
  programs in this book. If this is the case, substitute the old style code described in the preceding section .
*/

#include  <iostream>
using namespace std;

int main() {
  int i, j;
  double d;

  i = 10;
  j = 20;
  d= 99.23;

  cout << "Here are some values : " << endl;
  cout << i << endl;
  cout << j << endl;
  cout << d << endl;

  return 0;
}