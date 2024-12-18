#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    unordered_map<string,string> map;
    map["sanidhya"]="varshney";
    map["mayank"]="shrivastava";
    map["ashutosh"]="birthare";

    for(auto p:map){
        cout<<p.first<<" "<<p.second<<endl;
    }
    //? rest of the methods are same as ordered map
    return 0;
}