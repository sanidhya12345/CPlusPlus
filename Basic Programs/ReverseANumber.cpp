#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number,answer=0;
    cin>>number;
    while (number!=0)
    {
        int digit=number%10;
        answer=(answer*10)+digit;
        number=number/10;
    }
    cout<<"Answer is :"<<answer<<endl;
    return 0;
}
