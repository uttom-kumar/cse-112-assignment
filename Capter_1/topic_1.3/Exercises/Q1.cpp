/*
    Write a program that inputs the number of ours that an employee works and the employee's wage.
    Then display the employee's gross pay.(Be sure to prompt for input.)
 */

#include <iostream>
using namespace std;
int main() {
    double hours ;
    double wages;
    double total_tk;
    cout<<"Enter your working time hours:"<<endl;
    cin>>hours;
    cout<<"Enter your working time wages per hour:"<<endl;
    cin>>wages;

    total_tk = hours*wages;
    cout<<"pay is:"<<total_tk<<endl;
    return 0;

}