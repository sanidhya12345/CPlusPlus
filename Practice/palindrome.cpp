#include<iostream>
using namespace std;

int reverse(int n){
    int rev=0;
    while(n!=0){
        int m=n%10;
        rev=rev*10+m;
        n=n/10;
    }
    return rev;
}
int main()
{
    int n;
    cin>>n;
    int rev=reverse(n);
    cout<<rev<<endl;
    if(rev==n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}