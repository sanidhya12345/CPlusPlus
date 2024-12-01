#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int n,int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==target){
           return mid;
        }
        else if(a[mid]>target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,target;
    cin>>n>>target;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<binarysearch(a,n,target);
    return 0;
}