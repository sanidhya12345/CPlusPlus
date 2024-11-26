#include<iostream>
#include<string.h>
using namespace std;


string solve(int a[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else if(a[i]!=a[j]){
            break;
        }
    }
    if(j>i){
        return "NO";
    }
    return "YES";
}

int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<solve(a,n);
    return 0;
}