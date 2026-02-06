/*
    What is wrong with the constructor shown in the following fragment?
 */

#include <iostream>
using namespace std;
class sample {
private:
    double a,b,c;
public:
    double sample(); //constractor do not have return types so (double sample) is invalid syntax in c++ rules
};
int main() {


}