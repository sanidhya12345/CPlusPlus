#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s, maxSubstr;
    cin >> s;
    int k;
    cin >> k;

    map<char, int> mp; // Sorted map to maintain character frequencies
    ll diff = 0, p = 0;
    int start = 0;

    for (int i = 0, j = 0; j < s.length(); j++) {
        mp[s[j]]++;

        // Calculate the difference between max and min characters
        diff = mp.rbegin()->first - mp.begin()->first;

        while (diff > k) {
            mp[s[i]]--;
            if (mp[s[i]] == 0) 
                mp.erase(s[i]);
            i++;
            diff = !mp.empty() ? mp.rbegin()->first - mp.begin()->first : 0;
        }

        ll length = j - i + 1;
        if (length > p) {
            p = length;
            start = i;
        }
    }
    
    maxSubstr = s.substr(start, p);
    cout << p << endl;
    cout << maxSubstr << endl;

    return 0;
}