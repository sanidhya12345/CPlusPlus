#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    set<int> s;

    //insert method is used to add elements in the set.
    for(int i=0;i<5;i++){
        s.insert(i);
    }
    //count method is used to count the number of occurrences of element in the set.

    cout<<s.count(4);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    //remove all the instanes of the element.
    s.erase(4);


    return 0;
}