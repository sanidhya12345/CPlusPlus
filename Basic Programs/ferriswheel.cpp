#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin >> n >>x;
    vector<int> values(n);
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }
    sort(values.begin(), values.end());
    int ans=0;
    int i=0,j=n-1;
    while(i<=j){
        if(values[i]+values[j]<=x){
            i++;
            j--;
        }
        else{
            j--;
        }
        ans++;
    }
    cout<<ans<<endl;
}
