#include<bits/stdc++.h>
using namespace std;
int main()
{
    string url;
    cin>>url;
    int start=url.find("?");
    int user=url.find("username");
    int pwd=url.find("pwd");
    int profile=url.find("profile");
    int role=url.find("role");
    int key=url.find("key");
    vector<int> v;
    for(int i=start;i<url.length();i++){
        if(url[i]=='&'){
            v.push_back(i);
        }
    }

    string qu=url.substr(user,v[0]-user).substr(url.substr(user,v[0]-user).find("=")+1);
    string qpw=url.substr(pwd,v[1]-pwd).substr(url.substr(pwd,v[1]-pwd).find("=")+1);
    string qpro=url.substr(profile,v[2]-profile).substr(url.substr(profile,v[2]-profile).find("=")+1);
    string qrole=url.substr(role,v[3]-role).substr(url.substr(role,v[3]-role).find("=")+1);
    string qkey=url.substr(key).substr(url.substr(key).find("=")+1);
    cout<<"username: "<<qu<<endl;
    cout<<"pwd: "<<qpw<<endl;
    cout<<"profile: "<<qpro<<endl;
    cout<<"role: "<<qrole<<endl;
    cout<<"key: "<<qkey<<endl;
    return 0;
}