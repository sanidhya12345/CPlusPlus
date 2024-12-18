#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);


    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop();

     cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    cout<<q.size()<<endl;

    cout<<q.empty();
    return 0;
}