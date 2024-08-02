#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    int sum=0,m=number;
    while(number!=0){
        int n=number%10;
        sum+=n*n*n;
        number=number/10;
    }
    if(m==sum){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Normal Number"<<endl;
    }
    return 0;
}
