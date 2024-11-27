#include<bits/stdc++.h>
using namespace std;
bool check(unordered_map<char,int >smap,unordered_map<char,int> tmap){
    for(char ch='a';ch<='z';ch++){
        if(smap[ch]<tmap[ch]){
            return false;
        }
    }
    return true;
}
int solve(string s,string t){
    unordered_map<char,int>smap;
    unordered_map<char,int>tmap;
    int n=t.length();
    int m=s.length();
    for(int i=0;i<n;i++){
        tmap[t[i]]++;
    }
    //use two pointer logic to find out the number of bad substrings.
    int count=0;
    for(int i=0,j=0;j<m;j++){
        smap[s[j]]++;
        while(check(smap,tmap)){
            smap[s[i]]--;
            if(smap[s[i]]==0){
                smap.erase(s[i]);
            }
            i++;
        }
        count+=(j-i+1);
    }
    return count;
}
int main()
{
    string s,t;
    cin>>s>>t;
    int n=s.length();
    int totalSubstrings= (n*(n+1))/2;// good+bad subtrings
    cout<<totalSubstrings-solve(s,t);
    return 0;
}