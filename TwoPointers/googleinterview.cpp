#include<bits/stdc++.h>
#include<set>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin >> s;
    int k;
    cin >> k;

    set<char> st; 
    ll diff = 0;  
    ll p = 0;     
    
    for (int i=0,j = 0; j < s.length(); j++) {
        st.insert(s[j]);
        
        // Update the difference using the largest and smallest elements in the set
        diff = *st.rbegin() - *st.begin(); 

        while (diff > k) { // If the difference exceeds k, shrink the window from the left
            st.erase(s[i]); // Remove the character at the left pointer
            i++;
            if (!st.empty()) { 
                diff = *st.rbegin() - *st.begin();
            } else {
                diff = 0;
            }
        }
        ll length = j - i + 1; 
        p = max(p, length);
    }
    
    cout << p << endl;
    return 0;
}
