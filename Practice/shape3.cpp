#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        //for spaces
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--){
        //for spaces
        for(int j=n-1;j>i;j--){
            cout<<" ";
        }
        for(int k=2*i+1;k>0;k--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}