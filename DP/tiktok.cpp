#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int solve(int cliplength,int diff){
    vector<vector<int>> dp(cliplength+1,vector<int>(26,0));
    vector<vector<int>> prefix(cliplength+1,vector<int>(26,0));
    for(int c=0;c<26;c++){
        dp[1][c]=1;
    }

    for(int i=2;i<cliplength+1;i++){

        //calculate prefix sum for dp[i-1]
        prefix[i-1][0]=dp[i-1][0];

        for(int c=1;c<26;c++){
            prefix[i-1][c]=prefix[i-1][c-1]+dp[i-1][c];
        }

        //update the dp[i][c] using the prefix sum

        for(int c=0;c<26;c++){
            int left=max(0,c-diff);
            int right=min(25,c+diff);

            dp[i][c]=prefix[i-1][right];
            if(left>0){
                dp[i][c]-=prefix[i-1][left-1];
            }
            dp[i][c]=dp[i][c]%MOD;
        }
    }
    int ans=0;

    for(int c=0;c<26;c++){
        ans+=dp[cliplength][c];
    }
    return ans%MOD;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cliplength,diff;
    cin>>cliplength>>diff;
    cout<<solve(cliplength,diff);
    return 0;
}