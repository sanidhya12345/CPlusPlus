#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> ar;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        ar.push_back(val);
    }
    sort(ar.begin(),ar.end());
    for(int i:ar){
        cout<<i<<" ";
    }
    return 0;
}