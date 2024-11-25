#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double pi=3.141592653;
    double radius;
    cin>>radius;
    cout<<fixed<< setprecision(9)<<pi*radius*radius;
    return 0;
}