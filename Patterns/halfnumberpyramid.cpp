#include<iostream>

using namespace std;

/*

1                                                                                                                               
1 2                                                                                                                             
1 2 3                                                                                                                           
1 2 3 4                                                                                                                         
1 2 3 4 5

*/
int main(int argc, char const *argv[])
{
	for(int i=1;i<6;i++){
		for (int j = 1; j <i+1; j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}