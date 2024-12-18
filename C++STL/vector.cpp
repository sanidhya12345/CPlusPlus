#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v={1,2,3,4,5};

    //how to print the vector elements
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //indexing is used to access the vector elements

    cout<<v[3]<<endl;

    //acess the first and last elements of the vector

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    //at(): it take the index of the element you want to find and returns that element from the vector

    cout<<v.at(2)<<endl;

    //? insert the element to the vector

    v.push_back(6);
    v.push_back(7);

    //! remove the element from the vector

    v.pop_back();

    //* empty(): this method is used to check that vector is empty or not.

    cout<<v.empty();    //!it will return 0 if the vector is not empty otherwise 1
    return 0;
}