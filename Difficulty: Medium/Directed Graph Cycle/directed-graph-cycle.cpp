class Solution {
  public:
  
    bool DFS(int u,unordered_map<int,vector<int>>&adj,vector<bool>&vis,vector<bool>&inrec){
        vis[u]=true;
        inrec[u]=true;
        
        for(auto v:adj[u]){
            if(vis[v]==false && DFS(v,adj,vis,inrec)) return true;
            else if(inrec[v]==true) return true;
        }
        
        inrec[u]=false;
        return false;
    }
    
    
    bool isCyclic(int V, vector<vector<int>>&edges) {
        vector<bool>vis(V,false);
        vector<bool>inrec(V,false);
         unordered_map<int,vector<int>>adj;
         for(auto x:edges){
             int u=x[0];
             int v=x[1];
             adj[u].push_back(v);
         }
        for(int i=0;i<V;i++){
            if(!vis[i] && DFS(i,adj,vis,inrec)) 
              return true;
        }
        return false;
    }
};