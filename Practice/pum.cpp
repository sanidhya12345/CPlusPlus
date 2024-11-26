#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ptr=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            if(j==3){
                cout<<"PUM";
            }
            else{
                cout<<ptr<<" ";
            }
            ptr++;
        }
        cout<<endl;
    }
    return 0;
}