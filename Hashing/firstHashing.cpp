#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	// unordered_map<string,int> map;

	// map["sanidhya"]=10;
	// map["varshney"]=20;

	// for(auto x:map){
	// 	cout<<x.first<<x.second;
	// 	cout<<endl;
	// }

	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	unordered_map<int,int> map;

	for(int i:arr){
		map[i]++;
	}

	for(auto x:map){
		cout<<x.first<<" "<<x.second;
		cout<<endl;
	}
	return 0;
}