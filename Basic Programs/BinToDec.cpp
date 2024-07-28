#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string binary;
    cin>>binary;
    int expo=binary.length(),index=0;
    int ans=0;
    while(expo!=0){
        if(binary[index]=='1'){
            ans=pow(2,expo-1)+ans;
        }
        expo--;
        index++;
    }
    cout<<ans;
    return 0;
}
