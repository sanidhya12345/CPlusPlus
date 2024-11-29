#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    unordered_map<int,int> map;
    while (q-->0)
    {
        int m,x;
        cin>>m>>x;
        if(m==1){
            map[x]++;
        }    
        if(m==2){
            cout<<map[x]<<endl;
        }
    }
    return 0;
}