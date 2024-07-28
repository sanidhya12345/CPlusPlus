#include<iostream>

using namespace std;

int findComplement(int num) {
        int mask=0;
        int m=num;
        while(m!=0){
            mask=(mask << 1) | 1;
            m=m>>1;
        }
        int ans=(~num) & mask;
        return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<findComplement(n);
    return 0;
}
