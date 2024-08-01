#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int numbers[4]={2,7,11,15},target=9;
    int i=0,j=3;
    while(i<j){
        if(numbers[i]+numbers[j]==target){
            cout<<i<<" "<<j;
            break;
        }
        else if(numbers[i]+numbers[j]<target){
            i++;
        }
        else if(numbers[i]+numbers[j]>target){
            j--;
        }
    }
    return 0;
}
