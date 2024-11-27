#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int i = 0, j = 0;
    
    // Two pointer approach
    while (i < n && j < m) {
        if (a[i] == b[j]) {
            j++;
        }
        i++;
    }
    
    if (j == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}