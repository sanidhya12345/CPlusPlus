#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	string s,pal;
	cout<<"Enter any string:- "<<endl;
	cin>>s;
	for(int i=s.length()-1;i>=0;i--){
		pal+=s[i];
	}
	pal==s?cout<<"yes the string is palindrome":cout<<"string is not palindrome";
	return 0;
}