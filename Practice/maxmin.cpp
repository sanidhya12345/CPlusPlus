#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int a,b,c;
    cin>>a>>b>>c;

    cout<<min(a,min(b,c))<<" "<<max(max(a,b),c);
    return 0;
}