#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int array[5]={1,2,3,4,5};
	int countOdd=0,countEven=0;
	for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
		if(array[i]%2==0){
			countEven++;
		}
		else{
			countOdd++;
		}
	}
	cout<<"Number of Odd Elements: "<<countOdd<<endl;
	cout<<"Number of Even Elements: "<<countEven;
	return 0;
}