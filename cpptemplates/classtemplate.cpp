#include<bits/stdc++.h>
using namespace std;

template <class T>

class Number{

    public:

    T add(T num1,T num2){
        return num1+num2;
    }
};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Number<int> obj1;
    cout<<obj1.add(2,3)<<endl;

    Number<double> obj2;
    cout<<obj2.add(3.4,5.9);
    return 0;
}