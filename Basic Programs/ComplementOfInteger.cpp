#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int bintodec(string binary){
    int expo=binary.length(),index=0;
    int ans=0;
    while(expo!=0){
        if(binary[index]=='1'){
            ans=pow(2,expo-1)+ans;
        }
        expo--;
        index++;
    }
    return ans;
}
int dectobin(int n){
    int ans=0;
    int i=0;
    while(n!=0){
        int digit=n & 1;
        ans=(digit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int binary=dectobin(n)+1;
    int index=0;
    int answer=0;
    while(binary!=0){
        int bit = binary % 10;
        if(bit==1){
            bit=0;
        }
        else{
            bit=1;
        }
        answer=(bit*pow(10,index))+answer;
        binary=binary/10;
        index++;
    }
    string s=to_string(answer);
    cout<<bintodec(s);
    return 0;
}
