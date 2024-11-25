#include<iostream>
using namespace std;

long long int factorial(long long int n){
    long long int fact=1;
    for(long long int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int test;
    cin>>test;
    while(test-->0){
        long long int n;
        cin>>n;
        if(n==0){
            cout<<1<<endl;
        }
        else{
            cout<<factorial(n)<<endl;
        }
    }
    return 0;
}