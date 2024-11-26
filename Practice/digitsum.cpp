#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   string digits;
   cin>>digits;
   int sum=0;
   for(char ch:digits){
      sum+=ch-'0';
   }
   cout<<sum;
    return 0;
}