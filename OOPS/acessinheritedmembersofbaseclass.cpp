#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
    int publicVar;
    void display(){
        cout<<"Value of public var: "<<publicVar;
    }
};

class Derived: public Base{

    public:

    void displayMember(){

        display();
    }

    void modifyMember(int pub){
        publicVar=pub;
    }
};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    Derived obj;
    obj.modifyMember(10);
    obj.displayMember();
    return 0;
}