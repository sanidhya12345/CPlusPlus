#include<bits/stdc++.h>
using namespace std;
 bool bfs(int src,int vis[],vector<vector<int>> &adj){
      vis[src]=1;
      
      queue<pair<int,int>> q;
      q.push({src,-1});
      
      while(!q.empty()){
          
          int node=q.front().first;
          int parent=q.front().second;
          q.pop();
          
          for(auto adjNode:adj[node]){
              if(!vis[adjNode]){
                  vis[adjNode]=1;
                  q.push({adjNode,node});
              }
              else if(parent!=adjNode){
                  return true;
              }
          }
      }
      return false;
  }
bool isCycle(vector<vector<int>>& adj) {
        //visted array
        int V=adj.size();
        int vis[V]={0};
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(bfs(i,vis,adj)) return true;
            }
        }
        return false;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);   
    return 0;
}