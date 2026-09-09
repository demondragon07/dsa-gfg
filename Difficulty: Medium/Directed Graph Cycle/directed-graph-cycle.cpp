class Solution {
  public:
  
    bool DFS(int node , vector<int>adj[],vector<int>&vis ,vector<int>&path){
        vis[node]=1;
        path[node]=1;
        for(int i=0;i<adj[node].size();i++){
            if(!vis[adj[node][i]]){
                if(DFS(adj[node][i],adj,vis,path)) return true;
            }
           else if(path[adj[node][i]]) return true;
        }
        path[node]=0;
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        vector<int>vis(V,0);
        vector<int>path(V,0);
        
        vector<int>adj[V];
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            adj[u].push_back(v);
        }
        
        for(int i=0;i<V;i++){
            if(DFS(i,adj,vis,path)) return true;
        }
        
        return 0;
    }
};