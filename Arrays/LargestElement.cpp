#include<iostream>
#include<climits>
using namespace std;

int main(int argc, char const *argv[])
{
	int array[5]={23,1,45,32,18};
	int largest=INT_MIN;
	for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
		if(largest<array[i]){
			largest=array[i];
		}
	}
	cout<<largest;
	return 0;
}