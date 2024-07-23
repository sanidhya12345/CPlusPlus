#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	char ch;
	cout<<"Enter the character:- "<<endl;
	cin>>ch;
	if (int(ch)>=65 && int(ch)<=90)
	{
		if(int(ch)==65 || int(ch)==69 || int(ch)==73 || int(ch)==79 || int(ch)==85){
			cout<<"It is a Vowel";
		}
		else{
			cout<<"It is a Consonant";
		}
	}
	else{
		if(int(ch)==97 || int(ch)==101 || int(ch)==105 || int(ch)==111 || int(ch)==117){
			cout<<"It is a Vowel";
		}
		else{
			cout<<"It is a Consonant";
		}
	}
	return 0;
}