#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int array[]={1,2,3,4,5,6};
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size-1;i++){
        swap(array[i],array[i+1]);
        i++;
    }
    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }
    return 0;
}
