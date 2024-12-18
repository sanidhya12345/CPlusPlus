#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //* by default priority queue is implemented as max-heap

    //!declaration of priority queue.

    priority_queue<int> pq;

    //? push method is used to insert elements in the pq

    pq.push(1);
    pq.push(40);
    pq.push(20);

    //access the element of the pq

    cout<<pq.top()<<endl; //it will return the maximum element from the pq.

    //!pop method is used to remove the largest element from the pq

    pq.pop();

    cout<<pq.top();


    //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!??!!

    //? priority queue using min-heap

    priority_queue<int,vector<int>,greater<int>> pq2;

    //? the operations remains the same instead of getting largest element we will get smallest element from the pq.
   return 0;
}