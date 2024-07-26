#include<iostream>
#include<climits>
using namespace std;

int main(int argc, char const *argv[])
{
	int size;
	cout<<"Enter the size of array: "<<endl;
	cin>>size;
	int array[size];
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	//find the maximum value of the array...

	int max_value=INT_MIN;
	for(int i=0;i<size;i++){
		max_value=max(max_value,array[i]);
	} 

	//create an array having the size of max_value+1

	int map[max_value+1]={0};
    int max_count=0;
	for(int i=0;i<size;i++){
		int count=1;
		if(map[array[i]]==0){
			for(int j=i+1;j<size;j++){
				if(array[i]==array[j]){
					count++;
				}
			}
			map[array[i]]=count;
			max_count=max(max_count,count);
		}
	}
	//Now find the most frequent element having the map[index]==max_count return index;
	if(max_count==1){
		cout<<"There is no frequent element in the array";
	}
	else{
		for(int i=0;i<max_value+1;i++){
			if(map[i]==max_count){
				cout<<"Most Frequent Element: "<<i;
				break;
			}
	 	 }
	}
	return 0;
}