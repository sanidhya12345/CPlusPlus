#include<bits/stdc++.h>
using namespace std;
bool dfs(int node,int parent,int vis[],vector<vector<int>> & adj){
      vis[node]=1;
      for(auto adjNode:adj[node]){
          
          if(vis[adjNode]==0){
             
             if(dfs(adjNode,node,vis,adj)){
                 return true;
             }
          }
          else if(parent!=adjNode){
              return true;
          }
      }
      return false;
}
bool isCycle(vector<vector<int>>& adj) {
        // Code here
        int V=adj.size();
        int vis[V]={0};
        for(int i=0;i<V;i++){
            
            if(vis[i]==0){
                if(dfs(i,-1,vis,adj)){
                    return true;
                }
            }
        }
        return false;
        
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    return 0;
}
