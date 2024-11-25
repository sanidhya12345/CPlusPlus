#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=min(a,b);
    while(ans>0){
        if(a%ans==0 && b%ans==0){
            break;
        }
        ans--;
    }
    cout<<ans;
    return 0;
}