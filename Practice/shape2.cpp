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
    return 0;
}