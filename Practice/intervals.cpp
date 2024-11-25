#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    int maxRange=max(l1,l2);
    int minRange=min(r1,r2);
    if(maxRange<=minRange){
        cout<<maxRange<<" "<<minRange;
    }
    else{
        cout<<-1;
    }
    return 0;
}