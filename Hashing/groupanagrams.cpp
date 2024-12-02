#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>>ans;
    unordered_map<string,vector<string>> map;
    for(string s:strs){
        string dup=s;
        sort(s.begin(),s.end());
        map[s].push_back(dup);
    }
    for(auto &pair:map){
        ans.push_back(pair.second);
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<string> v={"act","pots","tops","cat","stop","hat"};
    vector<vector<string>> ans=groupAnagrams(v);
    return 0;
}