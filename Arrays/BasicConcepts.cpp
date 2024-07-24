#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	//declaration of arrays..

	int number[4]={1,2,3,4};
	string names[3]={"sanidhya","mayank","ashish"};

	//accessing the array elements...

	// cout<<number[3]<<endl;
	// cout<<names[2];

	//updating the array elements...

	number[1]=56;
	names[2]="ashutosh";

	// cout<<number[1]<<endl;
	// cout<<names[2];

	//looping the array elements...

	int size=sizeof(number)/sizeof(number[0]);
	for(int i=0;i<size;i++){
		cout<<number[i]<<endl;
	}
	return 0;
}