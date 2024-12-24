#include<bits/stdc++.h>
using namespace std;

//syntax declaration of inheritance

/*

class derived_class: access_specifier base_class
{

};

if the access specifier is not defined by default it is private

*/

class Parent{

    public :
    // base class members

    int id_p;
    void printID_p(){
        cout<<"Base ID: "<<id_p<<endl;
    }
};

class Child:public Parent{
    public:
    //derived class members
    int id_c;
    void printID_c(){
        cout<<"Child ID: "<<id_c<<endl;
    }

};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Child obj1;

    //An object of class has all data members and member functions of class parent so we try accessing the parents method and data from the child class object.

    obj1.id_p=7;
    obj1.printID_p();

    //finally accessing the child class methods

    obj1.id_c=91;
    obj1.printID_c();
    return 0;
}