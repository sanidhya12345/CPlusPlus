#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==x){
                flag=true; //found the element
                break;
            }
        }
    }
    if(!flag){
        cout<<"will take number";
    }
    else{
        cout<<"will not take number";
    }
    return 0;
}