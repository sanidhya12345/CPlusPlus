#include<iostream>

using namespace std;

/*

* * * * *
* * * *
* * * 
* *
*

*/

int main(int argc, char const *argv[])
{
	for(int i=0;i<5;i++){
		for(int j=5-i;j>0;j--){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	return 0;
}