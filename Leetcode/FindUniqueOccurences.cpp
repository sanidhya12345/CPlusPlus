#include<iostream>
#include<vector>
using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> freqMap;
    int arr[]={-3,0,1,-3,1,1,1,-3,10,0};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]!=1001){
            int count=1;
            for(int j=i+1;j<sizeof(arr)/sizeof(arr[0]);j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=1001;
                }
            }
            freqMap.push_back(count);
        }
    }
    bool flag=false;
    for(int i=0;i<freqMap.size()-1;i++){
         if(freqMap[i]==freqMap[i+1]){
            flag=true;
            break;
         }    
    }
    if(flag){
        cout<<"False";
    }
    else{
        cout<<"True";
    }
    return 0;
}
