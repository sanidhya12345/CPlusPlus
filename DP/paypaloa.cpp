#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int k;
    cin>>k;
    int dp[s.length()]={0};
    dp[0]=1;
    int maxlen=0;
    int lastindex=0;
    for(int i=1;i<s.length();i++){
        if(abs(int(s[i-1])-s[i])<=k){
            dp[i]=dp[i-1]+1;
        }
        else{
            dp[i]=1;
        }
        if(dp[i]>maxlen){
            maxlen=dp[i];
            lastindex=i;
        }
    }
    int startindex=lastindex-maxlen+1;
    cout<<s.substr(startindex,maxlen);
    return 0;
}