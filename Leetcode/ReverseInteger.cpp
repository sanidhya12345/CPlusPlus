#include<iostream>
#include<climits>
using namespace std;

int main(int argc, char const *argv[])
{
    int number;
    cin>>number;
    int ans=0;
    while(number!=0){
        int digit=number%10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){
            cout<<0<<endl;
        }
        ans=ans*10+digit;
        number=number/10;
    }
    cout<<ans;
    return 0;
}

