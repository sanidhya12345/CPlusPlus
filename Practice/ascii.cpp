#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ascii=int(s[0]);
    if(ascii>=48 && ascii<=57){
        cout<<"IS DIGIT";
    }
    else{
        if(ascii>=65 && ascii<=122){
            cout<<"ALPHA"<<endl;

            if(ascii>=65 && ascii<=90){
                cout<<"IS CAPITAL";
             }
            else{
                cout<<"IS SMALL";
            }
        }
    }
    return 0;
}