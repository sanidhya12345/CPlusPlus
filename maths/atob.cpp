#include <bits/stdc++.h>
#define ll long long
using namespace std;

// General function to calculate extra steps needed if one coordinate exceeds the limit
ll solve(ll distance, ll limit, ll remaining) {
    // Calculate complete blocks of limit
    ll extra = max(0LL, distance - 1) / limit; 
    if (extra >= remaining) {
        extra -= remaining; // Reduce remaining contributions from other coordinates
        return extra + (extra % 2); // Add 1 if extra is odd
    }
    return 0; // No additional steps needed if within bounds
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        ll x1, y1, z1, x2, y2, z2, k;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> k;

        // Calculate the absolute distance in each coordinate
        ll dx = abs(x1 - x2);
        ll dy = abs(y1 - y2);
        ll dz = abs(z1 - z2);

        ll ans = dx + dy + dz;

        // Handle x-coordinate
        ans += solve(dx, k, dy + dz);

        // Handle y-coordinate
        ans += solve(dy, k, dx + dz);

        // Handle z-coordinate
        ans += solve(dz, k, dx + dy);

        // Output the result for this test case
        cout << ans << '\n';
    }

    return 0;
}
