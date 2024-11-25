#include<bits/stdc++.h>
#include<climits>
#include<vector>
using namespace std;

//we have to kill all the people using bullet power m
int solve1(vector<int> &p,int m){
    sort(p.begin(),p.end());
    int n=p.size();
    if(p[n-1]%m==0){
        return p[n-1]/m;
    }
    return (p[n-1]/m)+1;
}

//we have to kill atleast k people using bullet power m
int solve2(vector<int> &p,int m,int k){
    sort(p.begin(),p.end());
    if(p[k]%m==0){
        return p[k]/m;
    }
    return (p[k]/m)+1;
}
//Now bullet power decreases by 1 as distance increases.
int solve3(vector<int> &p,int m,int k){
    int n=p.size();
    if(m<n){
        return -1;
    }
    int g=0;
    int maxBullets=INT_MIN;
    for(int i=0;i<n;i++){
        int b=p[i]/(m-g);
        if(p[i]%(m-g)!=0){
            b=b+1;
        }
        maxBullets=max(maxBullets,b);
        g++;
    }
    return maxBullets;
}
//maximum bullets to kill atleast k people and also the bullet power

bool checkLS(vector<int> &p,int m,int k,int bullet){
    int c=0;
    int n=p.size();
    int g=0;
    for(int i=0;i<n;i++){
       int b=p[i]/(m-g);
       if(p[i]%(m-g)!=0){
        b = b + 1; 
       }
       if(bullet>=b){
         c++;
       }
    g++;
   }
   if(c>=k){
     return true;
   }
   return false;
}
int solve4LS(vector<int> &p,int m,int k){
    int n=p.size();
    if(m<n) return -1;
    int bullet=1;
    int ans;
    while(bullet<=INT_MAX){
        if(checkLS(p,m,k,bullet)==false){
            bullet++;
        }
        else{
            ans=bullet;
            break;
        }
    }
    return ans;
}

//binary search

int solve5BS(vector<int> &p,int m,int k){
    int n=p.size();
    if(m<n) return -1;
    int low=1;
    int high=INT_MAX;
    while(low<=high){
        int mid=(high+low)/2;
        if(checkLS(p,m,k,mid)==false){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
int main()
{
    int n,m,k;
    cin>>n;
    cin>>m;
    cin>>k;
    vector<int> p;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        p.push_back(val);
    }
    cout<<solve1(p,m)<<endl;
    cout<<solve2(p,m,k)<<endl;
    cout<<solve3(p,m,k)<<endl;
    cout<<solve4LS(p,m,k)<<endl;
    cout<<solve5BS(p,m,k);
    return 0;
}