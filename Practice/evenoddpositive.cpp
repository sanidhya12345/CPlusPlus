#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int odd=0;
    int even=0;
    int pos=0;
    int neg=0;
    for(int i:arr)
    {
        if(i%2==0){
            even++;
        }
        if(i%2!=0){
            odd++;
        }
        if(i>0){
            pos++;
        }
        if(i<0){
            neg++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg;
    return 0;
}