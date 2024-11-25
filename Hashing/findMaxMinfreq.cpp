#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;//size of the array

    cin>>n;

    int a[n];

    int i=0;
    while(i<n){
        cin>>a[i];
        i++;
    }

    //store the frequency of the array elements
    unordered_map<int,int> map;

    for(int i=0;i<n;i++){
        map[a[i]]++;
    }

    int maxFreq=INT_MIN;//max frquency
    int minFreq=INT_MAX;//min frequency

    for(auto& pair:map){
        maxFreq=max(maxFreq,pair.second);
        minFreq=min(minFreq,pair.second);
    }

    cout<<minFreq<<endl;
    cout<<maxFreq;
    
    return 0;
}
