#include<iostream>
#include<math.h>
using namespace std;

bool checkPrime(int n){
    bool flag=false;
    for(int i=2;i<=int(sqrt(n));i++){
        if(n%i==0){
            flag=true;
            break;
        }
    }
    if(flag){
        return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}