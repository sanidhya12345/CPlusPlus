#include<bits/stdc++.h>
using namespace std;

void dfs(int row,int col,vector<vector<int>> &ans,vector<vector<int>> &image,int newColor,int delrow[],int delcol[],int inicolor){
    ans[row][col]=newColor;
    int n=image.size();
    int m=image[0].size();

    for(int i=0;i<4;i++){
        int nrow=row+delrow[i];
        int ncol=col+delcol[i];

        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==inicolor && ans[nrow][ncol]!=newColor){
            dfs(nrow,ncol,ans,image,newColor,delrow,delcol,inicolor);
        }
    }
}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,int newColor) {

    int iniColor=image[sr][sc];
    vector<vector<int>> ans=image;
    int delrow[]={-1,0,1,0};
    int delcol[]={0,1,0,-1};
    dfs(sr,sc,ans,image,newColor,delrow,delcol,iniColor);

    return ans;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<int>>image{
	    {1,1,1},
	    {1,1,0},
	    {1,0,1}
	};
    vector<vector<int>> ans = floodFill(image, 1, 1, 2);
	for(auto i: ans){
		for(auto j: i)
			cout << j << " ";
		cout << "\n";
	}
    return 0;
}