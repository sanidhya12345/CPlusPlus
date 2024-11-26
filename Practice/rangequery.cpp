#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    
    vector<int> a(n + 1); // Use 1-based indexing
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<long long> prefix(n + 1, 0); // Use long long for larger sums
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
    }

    while (q-- > 0) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl;
    }

    return 0;
}
