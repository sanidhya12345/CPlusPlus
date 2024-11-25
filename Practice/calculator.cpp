#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int pos;
    char op;
    for(char ch:s){
        if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            pos=s.find(ch);
            op=ch;
        }
    }
    string a=s.substr(0,pos);
    string b=s.substr(pos+1,s.length());
    int newa=stoi(a);
    int newb=stoi(b);
    if(op=='+'){
        cout<<newa+newb;
    }
    else if(op=='-'){
        cout<<newa-newb;
    }
    else if(op=='*'){
        cout<<newa*newb;
    }
    else{
        cout<<newa/newb;
    }
    return 0;
}