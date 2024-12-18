#include<bits/stdc++.h>
#include<map>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<int,string> mp;
    mp[1]="sanidhya";
    mp[2]="mayank";
    mp[3]="ashutosh";

    map<int,string>::iterator iter;

    for(iter=mp.begin();iter!=mp.end();iter++){
        cout<<iter->first<<"-"<<iter->second<<endl;
    }

    //?mp.find(key) method is used to check the particular key is present in the map or not.
    //! if it is not present then the result will point to the end of the map.

    cout<<(mp.find(3)==mp.end())<<endl; //if it is present then it will give 0 as the output otherwise 1

    //?erase method is used to remove the keys from the map

    mp.erase(3);

    for(iter=mp.begin();iter!=mp.end();iter++){
        cout<<iter->first<<"-"<<iter->second<<endl;
    }
    return 0;
}