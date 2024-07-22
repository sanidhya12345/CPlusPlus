#include<iostream>

using namespace std;

/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/

int main(int argc, char const *argv[])
{
	int space=4;
	int star=1;
	for(int i=0;i<5;i++){

		for(int sp=space;sp>0;sp--){
			cout<<"  ";
		}
		space--;
		for(int st=0;st<star;st++){
			cout<<"*"<<" ";
		}
		star+=2;
		cout<<endl;
	}
	return 0;
}