#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int array[]={23,10,8,9,5};
	int sum=0;
	int size=sizeof(array)/sizeof(array[0]);
	for(int i=0;i<size;i++){
		sum+=array[i];
	}
	cout<<sum;
	return 0;
}