#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    int best=0;
    for(int i=0;i<n;i++){
        sum=max(sum+a[i],a[i]);
        best=max(best,sum);
    }
    cout<<best;
    return 0;
}