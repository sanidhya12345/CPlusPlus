#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int matrix[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>matrix[i][j];
        }
    }
    int transpose[3][3];
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transpose[i][j]=matrix[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
