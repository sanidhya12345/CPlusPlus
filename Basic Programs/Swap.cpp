#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a,b;
	cout<<"Enter the value of a and b:- "<<endl;
	cin>>a>>b;
	cout<<"Before swapping values are:- "<<endl;
	cout<<a<<" "<<b<<endl;
	int temp=a;
	a=b;
	b=temp;
	cout<<"After swapping values are:- "<<endl;
	cout<<a<<" "<<b;
	return 0;
}