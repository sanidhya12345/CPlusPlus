#include<iostream>

using namespace std;

/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
int main(int argc, char const *argv[])
{
	//first write code for the normal pyramid
	int space1=4,star1=1;
	for(int i=0;i<5;i++){

		//loop for spaces...

		for(int sp=space1;sp>0;sp--){
			cout<<"  ";
		}
		space1--;

		//loop for stars...

		for(int st=0;st<star1;st++){
			cout<<"*"<<" ";
		}
		star1+=2;
		cout<<endl;
	}
	//Let's code for the inverted pyramid.
	int space2=1,star2=7;
	for(int i=0;i<4;i++){

		//loop for spaces...

		for(int sp=0;sp<space2;sp++){
			cout<<"  ";
		}
		space2++;

		//loop for the stars..

		for(int st=star2;st>=1;st--){
			cout<<"*"<<" "; 
		}
		star2-=2;
		cout<<endl;
	}
	return 0;
}