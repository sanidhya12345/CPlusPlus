#include <bits/stdc++.h>
using namespace std;

int  main()
{
	int n,m;
	cin>>n>>m;
	vector<int> price(n);
	for(int i=0;i<n;i++){
		cin>>price[i];
	}
	vector<int> max(m);
	for(int i=0;i<m;i++){
		cin>>max[i];
	}
	sort(price.begin(),price.end());
	sort(max.begin(),max.end());
	int i=0,j=0;

	while(i<n && j<m){
		if(price[i]<=max[j]){
			cout<<price[i]<<endl;
			i++;
			j++;
		}
		else if(price[i]>max[i]){
			i++;
		}
		else{
			j++;
		}
	}
	return 0;
}