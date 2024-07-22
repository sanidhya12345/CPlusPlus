#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,digit,reverse=0,number;
	cout<<"Enter any number";
	cin>>n;
	number=n;
	while(n!=0){
		digit=n%10;
		reverse=(reverse*10)+digit;
		n=n/10;
	}
	if (reverse==number)
	{
		cout<<"Palindrome Number";
	}
	else
	{
		cout<<"Not a Palindrome Number";
	}
	return 0;
}