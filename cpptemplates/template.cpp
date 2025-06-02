#include<bits/stdc++.h>
using namespace std;

template <typename T>

T add(T num1,T num2){
    return num1+num2;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int result1=add(2,3);
    double result2=add(2.3,4.5);

    cout<<"Integer addition: "<<result1<<endl;
    cout<<"Double addition: "<<result2;

    return 0;
}