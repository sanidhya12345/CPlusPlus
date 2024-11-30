#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arp[n];
    for(int i=0;i<n;i++){
        cin>>arp[i];
    }
    unordered_map<int,bool> map;
    for(int i=0;i<n;i++){
        map[arp[i]]=true;
    }
    for(int i=-m;i<=m;i++){
        if(map.find(i)==map.end()){
            cout<<i;
            break;
        }
    }
    
    return 0;
}