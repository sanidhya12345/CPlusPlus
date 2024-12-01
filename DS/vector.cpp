#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    for(int i=0;i<6;i++){
        v.push_back(i);
    }
    // for(int i=0;i<6;i++){
    //     cout<<v[i]<<endl;
    // }

    //how to find the size of the vector

    cout<<v.size()<<endl;

    //shorter way to iterate through the vector

    for(auto x:v){
        cout<<x<<endl;
    }

    //how to access the last element of the vector

    cout<<v.back()<<endl;

    //intitialize 10 elements with the value 0

    vector<int> vect(10,5);
    
    return 0;
}