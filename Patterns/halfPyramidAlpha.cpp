#include<iostream>
using namespace std;

/*

A
BB
CCC
DDDD
EEEEE
*/
int main(int argc, char const *argv[])
{
	int count=0;
    for(int i=0;i<5;i++){
    	for(int j=0;j<i+1;j++){
    		cout<<char(count+65)<<" ";
    	}
    	count++;
    	cout<<endl;
    }	
	return 0;
}