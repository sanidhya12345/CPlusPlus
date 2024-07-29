#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int array[]={3,4,2,4,2,3,1};
    int size=sizeof(array)/sizeof(array[0]);
    int ans=0;
    for(int i=0;i<size;i++){
        ans=array[i] ^ ans;
    }
    cout<<ans;
    return 0;
}
